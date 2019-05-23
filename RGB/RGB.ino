
//int LED_PIN = 7;
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

//int onTime = 3050;
//int offTime = 500;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
 setColour(255,0,0);
 delay(5000);
 setColour(0,255,0);
 delay(5000); 
 setColour(0,0,255);
 delay(5000);
 setColour(199,199,199);
 delay(5000); 
  setColour(80,0,80);
 delay(5000);
 setColour(0,255,255);
 delay(5000); 
}
void setColour(int red, int green, int blue)
{
//red = 255- red;
//green = 255- green;
//blue = 255 - blue;
 analogWrite(redPin,red);
 analogWrite(greenPin, blue);
 analogWrite(bluePin, blue);
}
