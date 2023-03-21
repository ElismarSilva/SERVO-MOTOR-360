#include <Servo.h>
#define pin_motor 2
Servo motor;

int Frente(int frente);
int Tras(int tras);
int Parado(int parado);

void setup() {
  motor.attach(pin_motor);


}

void loop()
{

  Frente(180);
  delay(2000);
  Tras(0);
  delay(2000);
  Parado(90);
  delay(2000);

}
int Frente(int frente)
{
  frente = 180;
  motor.write(frente);
}

int Tras(int tras)
{
  tras = 0;
  motor.write(tras);
}

int Parado(int parado)
{
  parado = 90;
  motor.write(parado);
}
