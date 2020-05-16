#include <Servo.h>

int pos = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_9;

void setup()
{
  servo_9.attach(9);

}

void loop()
{
  pos = 0.01723 * readUltrasonicDistance(7, 7);
  if (40 > pos) {
    servo_9.write(90);
    delay(4000); // Wait for 4000 millisecond(s)
    servo_9.write(0);
  } else {
    servo_9.write(0);
  }
}