/*
    Project name : Hall magnetic sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-hall-magnetic-sensor
*/

// Hall Magnetic Sensor Module Pin Configuration
const int hallSensorPin = 2; // Digital pin connected to the Hall magnetic sensor

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
  
  // Set the Hall sensor pin as INPUT
  pinMode(hallSensorPin, INPUT);
}

void loop() 
{
  // Read the state of the Hall sensor
  int sensorValue = digitalRead(hallSensorPin);
  
  // Print the sensor value to Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected!");
  } else {
    Serial.println("No magnetic field detected");
  }
  
  delay(500); // Add a small delay before the next reading
}
