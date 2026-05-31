
// SDR-Based Wireless Health Monitoring System
#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <DHT.h>

#define WIFI_SSID "Redmi"
#define WIFI_PASSWORD "12345678"
#define TOKEN "shnneaq3h6rr231wnlxg"

const char* mqtt_server = "eu.thingsboard.cloud";

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
PulseOximeter pox;
WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
}

void loop() {
}
