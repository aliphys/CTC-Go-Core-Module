/*
  CTC GO! - CORE MODULE 
  PROJECT 1 - Fast Fingers

  This sketch is written to accompany Stage 2 in Fast Fingers of the CTC GO! Core Module
*/

int greenLED_P1 = 13;
int button_P1 = 6;
int greenLED_P2 = 9;
int button_P2 = 7;

void setup()
{
  pinMode(greenLED_P1, OUTPUT);
  pinMode(greenLED_P2, _____); 
  pinMode(button_P2, INPUT);
  pinMode(button_P1, _____);

}

void loop() {

  if ( digitalRead(button_P1) == HIGH)
  {
    digitalWrite(greenLED_P1, HIGH);
  }
  else
  {
    digitalWrite(greenLED_P1, LOW);
  }
   //STEP2; to check if button_P2 & greenLED_P2 works 
  if ( digitalRead(_____) == _____)
  {
    digitalWrite(_____,_____);
  }
  else
  {
    digitalWrite(_____,_____);
  }
}
