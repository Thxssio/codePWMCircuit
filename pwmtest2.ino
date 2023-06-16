int pwm1 = 9;
int pwm2 = 10;

void setup() {
  pinMode(pwm1, OUTPUT);
  pinMode(pwm2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1);
  digitalWrite(pwm1, HIGH);
  delay(19);
  digitalWrite(pwm1, LOW);
  delay(1);
  Serial.println(pwm1);
  digitalWrite(pwm2, HIGH);
  delay(19);
  digitalWrite(pwm2, HIGH);
  Serial.println(pwm2);
}
