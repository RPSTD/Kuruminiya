// KURUMINIYA: Hardware Code for Red Palm Weevil Detection
// ESP8266 + Microphone Module + Stethoscope Sensor

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// WiFi Credentials
const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";
const char* serverUrl = "http://yourserver.com/data";

// Microphone & Sensor Pins
#define MIC_PIN A0
#define OLED_RESET -1
Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET);

// Threshold for Weevil Detection
const int soundThreshold = 500;

void setup() {
    Serial.begin(115200);
    pinMode(MIC_PIN, INPUT);
    
    // Connect to WiFi
    WiFi.begin(ssid, password);
    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi");
    
    // Initialize OLED Display
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println("SSD1306 allocation failed");
        for (;;);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0,0);
    display.println("KURUMINIYA STARTED");
    display.display();
}

void loop() {
    int soundLevel = analogRead(MIC_PIN);
    Serial.print("Sound Level: ");
    Serial.println(soundLevel);
    
    // Display on OLED
    display.clearDisplay();
    display.setCursor(0,0);
    display.print("Sound: ");
    display.println(soundLevel);
    display.display();
    
    // Send data to server if threshold exceeded
    if (soundLevel > soundThreshold) {
        sendAlert(soundLevel);
    }
    
    delay(2000);
}

void sendAlert(int value) {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        http.begin(serverUrl);
        http.addHeader("Content-Type", "application/json");
        
        String postData = "{\"soundLevel\": " + String(value) + "}";
        int httpResponseCode = http.POST(postData);
        Serial.print("Server Response: ");
        Serial.println(httpResponseCode);
        
        http.end();
    } else {
        Serial.println("WiFi Disconnected");
    }
}
