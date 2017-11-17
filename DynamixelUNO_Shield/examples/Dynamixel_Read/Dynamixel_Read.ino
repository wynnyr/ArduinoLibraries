#include <DynamixelUNO_Shield.h>
#include <SoftwareSerial.h>
int Temperature,Voltage,Position; 

void setup(){
Serial.begin(9600);      // Begin Serial Comunication
Dynamixel.begin(57142);  // Inicialize the servo at 57142 bps
delay(1000);
}

void loop(){
  Temperature = Dynamixel.readTemperature(1); // Request and Print the Temperature
  Voltage = Dynamixel.readVoltage(1);         // Request and Print the Voltage
  Position = Dynamixel.readPosition(1);       // Request and Print the Position 

  Dynamixel.speed(1,random(50,1023));         // Random Servo speed from 50 to 1023
  Dynamixel.move(1,random(200,800));          // Move Servo random from 200 to 800

  Serial.print(" *** Temperature: ");         // Print the variables in the Serial Monitor
  Serial.print(Temperature);
  Serial.print(" Celcius  Voltage: ");
  Serial.print(Voltage);
  Serial.print("  Volts   Position: ");
  Serial.print(Position);
  Serial.println(" of 1023 resolution");
  
delay(1000);

}
