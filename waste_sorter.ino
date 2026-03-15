
#include <Servo.h>

Servo sorter;

int ultrasonicTrig = 7;
int ultrasonicEcho = 6;

int moistureSensor = A0;
int metalSensor = A1;

void setup() {
  Serial.begin(9600);
  sorter.attach(9);

  pinMode(ultrasonicTrig, OUTPUT);
  pinMode(ultrasonicEcho, INPUT);
}

void loop() {

  int moisture = analogRead(moistureSensor);
  int metal = analogRead(metalSensor);

  if (moisture > 500) {
    Serial.println("Wet Waste");
    sorter.write(30);
  }
  else if (metal > 500) {
    Serial.println("Metal Waste");
    sorter.write(90);
  }
  else {
    Serial.println("Dry Waste");
    sorter.write(150);
  }

  delay(2000);
}
