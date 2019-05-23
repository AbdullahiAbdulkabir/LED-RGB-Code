float sensor = 0;
int pinSense = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(pinSense);
  Serial.println(sensor);
  delay(3000);

}
