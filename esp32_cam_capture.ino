
#include "esp_camera.h"

void setup(){
  Serial.begin(115200);
  Serial.println("ESP32-CAM Ready for Image Capture");
}

void loop(){
  Serial.println("Capturing Image...");
  delay(5000);
}
