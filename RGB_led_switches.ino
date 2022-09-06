
int RED = 5;
int GREEN = 6;
int BLUE = 3;
int buttonR = 9;
int buttonG = 8;
int buttonB = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(buttonR, INPUT_PULLUP);  
  pinMode(buttonG, INPUT_PULLUP);  
  Serial.begin(9600);
  Serial.println("START");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(buttonR) == LOW)
  {
    Serial.println("RED button pressed");
    digitalWrite(RED, HIGH);
    //analogWrite(RED, 255);
  }
  
   if(digitalRead(buttonG) == LOW)
  {
    Serial.println("GREEN button pressed");
    digitalWrite(GREEN, HIGH);
    //analogWrite(GREEN, 255);
  }
  
  if(digitalRead(buttonB) == LOW)
  {
    Serial.println("BLUE button pressed");
    digitalWrite(BLUE, HIGH);
    //analogWrite(BLUE, 255);
  }

}
