/*
* Instituto Federal do Maranhão - IFMA
* Aluno: Sostenes Gomes Silva
* Codigo Adaptado por @thxssio | https://github.com/Thxssio
*/


const int arrayPWM[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
const int valor_arrayPWM = 13;

const int pinoPWM1 = 10;
const int pinoPWM2 = 9;


bool statusPWM1 = true;
bool statusPWM2 = true;


void setup() {
  pinMode(pinoPWM1, OUTPUT);
  pinMode(pinoPWM2, OUTPUT);
}
void loop() {

  for (int i(0); i != valor_arrayPWM; i++) {

    if (statusPWM1) {
      digitalWrite(pinoPWM1, HIGH);
      delayMicroseconds(arrayPWM[i]);
      statusPWM1 = false;

    } else {
      digitalWrite(pinoPWM1, LOW);
      delayMicroseconds(arrayPWM[i]);
      statusPWM1 = true;

    }
  }

  for (int i(0); i != valor_arrayPWM; i++) {
    if (statusPWM2) {
      digitalWrite(pinoPWM2, HIGH);
      delayMicroseconds(arrayPWM[i]);
      statusPWM2 = false;

    } else {
      digitalWrite(pinoPWM2, LOW);
      delayMicroseconds(arrayPWM[i]);
      statusPWM2 = true;
    }
  }
}