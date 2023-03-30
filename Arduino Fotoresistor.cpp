// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  digitalWrite(2, LOW);
  if (analogRead(A0) < 500) {
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}