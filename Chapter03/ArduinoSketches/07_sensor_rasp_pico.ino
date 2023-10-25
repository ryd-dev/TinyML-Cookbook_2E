#include <DHT.h>

// Arduino pin number
const int gpio_pin_dht_pin = 10;
DHT dht(gpio_pin_dht_pin, DHT22);

#define SENSOR dht

void setup() {
  Serial.begin(9600);
  while(!Serial);
  SENSOR.begin();
  delay(2000);

  Serial.print("Test Temperature = ");
  Serial.print(SENSOR.readTemperature(), 2);
  Serial.println(" °C");
  Serial.print("Test Humidity = ");
  Serial.print(SENSOR.readHumidity(), 2);
  Serial.println(" %");
}

void loop() {
}
