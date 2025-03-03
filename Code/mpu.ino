#include "Wire.h"
#include <MPU6050_light.h>

MPU6050 mpu(Wire);
unsigned long timer = 0;

void setup() {

  Serial.begin(9600);
  Wire.begin();
  byte status = mpu.begin();
  Serial.print(F("MPU6050 status: "));
  Serial.println(status);
  while (status != 0) { } // 
  Serial.println(F("Bắt đầu đo góc: "));
  delay(1000);
  mpu.calcOffsets(); // gyro and accelero
  Serial.println("Done!n");
}


void loop() {
  // put your main code here, to run repeatedly:
  mpu.update();
  if ((millis() - timer) > 10) { // print data every 10ms
     Serial.print("góc X : ");
     Serial.print(mpu.getAngleX());
     Serial.print("\n");
     Serial.print("góc Y : ");
     Serial.print(mpu.getAngleY());
     Serial.print("\n");
     Serial.print("góc Z : ");
     Serial.println(mpu.getAngleZ());
     timer = millis();
   }
}
