# SDR-Based Wireless Health Monitoring System

## 📌 Project Overview

The SDR-Based Wireless Health Monitoring System is designed for continuous real-time monitoring of patient health parameters. The system collects physiological data using biomedical sensors and transmits it wirelessly to the cloud for remote monitoring.

The ESP32 microcontroller processes the sensor readings and prioritizes emergency health data when abnormal conditions are detected. Healthcare providers can monitor patients through the ThingsBoard cloud platform using dashboards, graphs, and alerts.

---

## 🎯 Objectives

- Monitor patient health continuously.
- Measure Heart Rate and SpO₂ levels.
- Monitor body temperature.
- Prioritize emergency health data.
- Enable remote healthcare monitoring.
- Improve patient safety and emergency response.

---

## 🛠 Technologies Used

- ESP32
- MAX30100 Pulse Oximeter Sensor
- DHT11 Temperature Sensor
- MQTT Protocol
- ThingsBoard Cloud
- Arduino IDE
- Embedded C

---

## 📋 Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 | 1 |
| MAX30100 Sensor | 1 |
| DHT11 Sensor | 1 |
| Jumper Wires | As Required |
| Breadboard | 1 |
| Power Supply | 1 |

---

## 💻 Software Requirements

- Arduino IDE
- ThingsBoard Cloud Platform
- PubSubClient Library
- WiFi Library
- MAX30100 Library
- DHT Sensor Library

---

## ⚙️ Working Principle

1. MAX30100 measures Heart Rate and SpO₂.
2. DHT11 measures temperature.
3. ESP32 processes sensor data.
4. Data is compared with threshold values.
5. Normal data is periodically uploaded.
6. Emergency data receives higher priority.
7. Data is transmitted to ThingsBoard Cloud via MQTT.
8. Doctors monitor patients remotely through dashboards.

---

## 🚨 Emergency Conditions

### Heart Rate

- Below 60 BPM
- Above 100 BPM

### SpO₂

- Below 95%

### Temperature

- Above 38°C

When abnormal conditions are detected, emergency alerts can be generated for healthcare providers.

---

## 📊 Features

- Real-Time Monitoring
- Wireless Communication
- Cloud Connectivity
- Emergency Data Prioritization
- Remote Healthcare Access
- Low Power Consumption
- Low-Cost Implementation

---

## ☁️ Cloud Platform

This project uses ThingsBoard Cloud for:

- Real-Time Dashboards
- Data Visualization
- Historical Data Storage
- Alert Generation
- Remote Monitoring

---

## 🔮 Future Enhancements

- ECG Monitoring
- AI-Based Disease Prediction
- Mobile Application Integration
- GPS-Based Patient Tracking
- SMS Alert System
- Electronic Health Record Integration



Bachelor of Electronics and Communication Engineering

Salem University
