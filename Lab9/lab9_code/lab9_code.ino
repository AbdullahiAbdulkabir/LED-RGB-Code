//SSG336 LAB 9

float sensor = 0; int cm = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}
void loop() {
  sensor = analogRead(0);
  if(sensor<=90)
  {
    Serial.println("Infinite distance!");
  }else if(sensor<100)
  {
   cm= 80;
  }else if(sensor<110)
  {
   cm= 70;
  }else if(sensor<118)
  {
   cm= 60;
  }else if(sensor<147)
  {
   cm= 50;
  }else if(sensor<188)
  {
   cm= 40;
  }else if(sensor<230)
  {
   cm= 30;
  }
  else if(sensor<302)
  {
   cm= 25;
  }
  else if(sensor<360)
  {
   cm= 20;
  }
  else if(sensor<505)
  {
   cm= 15;
  }
  else if(sensor<510)
  {
   cm= 10;
  }
  else if(sensor>=510)
  {
    Serial.println("Too close");
  }
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println("Cm"); delay(250);
  // put your main code here, to run repeatedly:

}
