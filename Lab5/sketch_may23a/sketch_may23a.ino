int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

byte leds = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin , OUTPUT);
  pinMode(dataPin , OUTPUT);
  pinMode(clockPin , OUTPUT);
  updateShiftRegister();
  Serial.begin(38400);
  while(! Serial);
  Serial.println("Enter LED Number 0 to 7 or 'x' to clear");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {char ch = Serial.read();
  if(ch >= '0' && ch <= '7')
  {
    int led = ch - '0';
    bitSet(leds,led);
    updateShiftRegister();
    Serial.print("Turned on LED");
    Serial.println(led);
  }
  if (ch =='x')
  {
    leds=0;
    updateShiftRegister();
    Serial.println("Cleared");
  }
    
    
    }
}

void updateShiftRegister()
{
  digitalWrite(latchPin ,LOW);
  shiftOut(dataPin ,clockPin , LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
  
}



