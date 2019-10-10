#include <Wire.h>
#include "PCA9685.h"
PCA9685 driver;
PCA9685 driver1;
// PCA9685 outputs = 12-bit = 4096 steps
// 2.5% of 20ms = 0.5ms ; 12.5% of 20ms = 2.5ms
// 2.5% of 4096 = 102 steps; 12.5% of 4096 = 512 steps
PCA9685_ServoEvaluator pwmServo(102, 470); // (-90deg, +90deg)
// Second Servo
// PCA9685_ServoEvaluator pwmServo2(102, 310, 505); // (0deg, 90deg, 180deg)
void setup() {
  Serial.begin(9600);
  Wire.begin();                 // Wire must be started first
  Wire.setClock(400000);        // Supported baud rates are 100kHz, 400kHz, and 1000kHz
  driver.resetDevices();
  driver1.resetDevices();       // Software resets all PCA9685 devices on Wire line
  driver.init(B000001);         // Address pins A5-A0 set to B000000
  driver1.init(B000000);
  driver.setPWMFrequency(50);   // Set frequency to 50Hz
  driver1.setPWMFrequency(50);
  driver1.setChannelPWM(10, pwmServo.pwmForAngle(0));
  driver1.setChannelPWM(11, pwmServo.pwmForAngle(0));
  driver1.setChannelPWM(12, pwmServo.pwmForAngle(0));
  driver1.setChannelPWM(13, pwmServo.pwmForAngle(0));
  driver1.setChannelPWM(14, pwmServo.pwmForAngle(0));
  driver1.setChannelPWM(15, pwmServo.pwmForAngle(0));
  delay(1000);
    driver.setChannelPWM(2, pwmServo.pwmForAngle(0));
  driver.setChannelPWM(3, pwmServo.pwmForAngle(0));
  driver.setChannelPWM(4, pwmServo.pwmForAngle(0));
  driver.setChannelPWM(5, pwmServo.pwmForAngle(0));
  driver.setChannelPWM(8, pwmServo.pwmForAngle(0));
  driver.setChannelPWM(9, pwmServo.pwmForAngle(0));
}
String num="";
String degree="";
int no,deg,deg1,deg0,pos;
void loop() {

  delay(2000);
//  driver.setChannelPWM(0, pwmServo.pwmForAngle(0));
//  driver.setChannelPWM(1, pwmServo.pwmForAngle(0));
//  driver.setChannelPWM(12, pwmServo.pwmForAngle(0));
//  driver.setChannelPWM(13, pwmServo.pwmForAngle(0));
//  driver.setChannelPWM(14, pwmServo.pwmForAngle(0));
//  driver.setChannelPWM(15, pwmServo.pwmForAngle(0));
  
 
}


//  if(Serial.available()>0){
//    num=Serial.readString();
//    no=String(num[0]).toInt();
//    pos=String(num[1]).toInt();
//    degree = num[2];degree += num[3];
//    deg=String(degree).toInt();
//    if(pos){
//      deg = -1*deg;
//    }
//    Serial.print(no);
//    Serial.print(" ");
//    Serial.print(deg);
//    Serial.println("");
//    driver.setChannelPWM(no, pwmServo.pwmForAngle(deg));
//  }



//  for(int i=0;i<16;i++){
//  driver.setChannelPWM(i, pwmServo.pwmForAngle(-45));
//  delay(1000);
//  driver.setChannelPWM(i, pwmServo.pwmForAngle(0));
//  delay(1000);
//  driver.setChannelPWM(i, pwmServo.pwmForAngle(45));
//  delay(1000);
//  }
//  for(int i=0;i<16;i++){
//  driver1.setChannelPWM(i, pwmServo.pwmForAngle(-45));
//  delay(1000);
//  driver1.setChannelPWM(i, pwmServo.pwmForAngle(0));
//  delay(1000);
//  driver1.setChannelPWM(i, pwmServo.pwmForAngle(45));
//  delay(1000);
//  }
//}
