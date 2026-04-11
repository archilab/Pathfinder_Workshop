#include <Arduino.h>
#include <PairLink.h>
#include <Wire.h>
#include <Adafruit_APDS9960.h>
#include <Adafruit_NeoPixel.h>

PairLink pairLink;
Adafruit_APDS9960 apds;
Adafruit_NeoPixel strip(6, 14, NEO_GRBW + NEO_KHZ800);

// Wird aufgerufen wenn ein Wert über PairLink empfangen wird
void onActorValue(float value) {
  int b = value * 255; // 0.0–1.0 → 0–255
  for (int i = 0; i < 6; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, b)); // Blau
  }
  strip.show();
}

void setup() {
  Serial.begin(115200);
  strip.begin();

  apds.begin();
  apds.enableGesture(true); // Gestenerkennung aktivieren

  PLConfig config;
  plConfigSetLocalOnly(config, "nextreality_net", "hololens", "ws://192.168.1.14:8080/ws");
  config.pairButtonPin = 0;  // Pairing-Button
  config.statusLedPin  = 2;  // Status-LED

  pairLink.begin(config);
  pairLink.addPublishChannel("sensor.value");
  pairLink.addSubscribeChannel("sensor.value");
  pairLink.onChannel("sensor.value", onActorValue);
}

void loop() {
  pairLink.update(); // PairLink-Verbindung pflegen

  float v = 0.0f;
  uint8_t g = apds.readGesture();
  if (g) v = 1.0f; // Geste erkannt → voller Wert

  if (pairLink.isPaired()) {
    pairLink.publish("sensor.value", v); // Wert über Netzwerk senden
  } else {
    onActorValue(v); // Lokal: direkt auf LEDs anwenden
  }
}
