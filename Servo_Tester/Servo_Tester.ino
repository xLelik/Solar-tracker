#include <Servo.h>

Servo servo1;

void setup() {
  servo1.attach(3);  // Пин куда подключена Servo

}

void loop() {
  int potent = analogRead(3);  // Пин куда подключён потенциометр
  potent = map(potent, 0, 1023, 0, 180);
  servo1.write(potent);
}
