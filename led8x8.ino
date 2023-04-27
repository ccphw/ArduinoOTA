int ms;
void setup() {
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D2, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
if (Serial.available()){
ms = Serial.parseInt();
}
for (int i = 0; i <= ms; i++) {
  analogWrite(D3, i);
}
for (int i = 0; i <= ms; i++) {
  analogWrite(D4, i);
}
for (int i = 0; i <= ms; i++) {
  analogWrite(D7, i);
}
for (int i = 0; i <= ms; i++) {
  analogWrite(D8, i);
}
for (int i = ms; i >= 0; i--) {
    analogWrite(D3, i);
}
for (int i = ms; i >= 0; i--) {
    analogWrite(D4, i);
}
for (int i = ms; i >= 0; i--) {
    analogWrite(D7, i);
}
for (int i = ms; i >= 0; i--) {
    analogWrite(D8, i);
}
}