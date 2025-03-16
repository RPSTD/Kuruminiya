# KURUMINIYA: Detection System for Red Palm Weevil Infestation in Coconut Trees.

## Overview
- KURUMINIYA is an IoT-based detection system that identifies red palm weevil infestations in coconut trees using sound-based monitoring. The system captures vibrations caused by weevil activity using a stethoscope sensor and microphone module. The collected data is processed by an ESP8266 microcontroller and transmitted to a mobile application for real-time visualization.

## Features
- Real-Time Detection: Uses a microphone module to capture weevil activity inside trees.

- IoT Integration: ESP8266 for wireless data transmission.

- Data Visualization: Mobile app displays sound patterns with gauges and line charts.

- Alerts & Notifications: Notifies users when weevil activity is detected.

- Data Storage & Playback: Saves sound data for later analysis.

- User-Friendly Interface: Simple dashboard for farmers and agricultural experts.

## System Architecture

- The system consists of three main layers:

1. Hardware Layer

 - Stethoscope sensor & microphone module

 - ESP8266 microcontroller for wireless communication

 - OLED display for instant feedback

2. Software Layer

 - Mobile application (Android/iOS)

 - Signal processing and noise filtering

 - Data visualization with charts

3. Database Layer

 - Stores recorded sound wave data

 - Enables historical analysis of infestation trends.

 ## Hardware Components
 <table border= 3>
 <tr>
 <th>components</th>
 <th>Description</th>
 </tr>
 <tr>
 <td>ESP8266 Module</td>
 <td>Wi-Fi enabled microcontroller for data transmission</td>
</tr>

<tr>
 <td>Microphone Module</td>
 <td>Captures sound waves from weevil activity</td>
</tr>

<tr>
 <td>Stethoscope Sensor</td>
 <td>Detects subtle vibrations within the tree trunk</td>
</tr>

<tr>OLED Display</td>
 <td>Provides real-time feedback to users</td>
</tr>

<tr>
 <td>Power Supply</td>
 <td>Lithium-ion battery for field deployment</td>
</tr>
 </table>

## Software Components

- Mobile Application: Displays sound data and infestation alerts.

- Signal Processing Algorithm: Filters noise and analyzes sound patterns.

- Database: Stores historical sound data for future reference.

## Installation & Setup

1. Hardware Assembly

- Connect the microphone module to the ESP8266.

- Attach the stethoscope sensor to the tree trunk.

- Power the system using a lithium-ion battery.

2. Software Installation

- Install the mobile application on your smartphone.

- Connect the ESP8266 to a Wi-Fi network.

- Start monitoring tree health through the app.

## Usage

1. Place the stethoscope sensor on the tree trunk.

2. Power on the system and connect to the mobile application.

3. Monitor real-time sound wave data.

4. Receive alerts if weevil activity is detected.

5. Save and analyze sound recordings for long-term monitoring.

## Future Enhancements

- AI-based sound analysis for improved accuracy.

- Expansion to detect other agricultural pests.

- Cloud integration for large-scale farm monitoring.