/*
  CTC GO! CORE MODULE 
  PROJECT 1 - Pinball

  This sketch is written to accompany Stage 5 in Pinball of the CTC GO! core module
*/

int blueLED_1 = 11;
int blueLED_2 = 12;
int redLED = 13;
int greenLED = 9;

int button_1 = 7; 
int button_2 = 6;

int losing = 0;
int winning = 0; 

void setup()
{
  pinMode (blueLED_1, OUTPUT);
  pinMode (blueLED_2, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (greenLED, OUTPUT);

  pinMode (button_1, INPUT);
  pinMode (button_2, INPUT);
}

void loop() {

  if ( digitalRead(button_1))
  {
   winning = 1;
   delay(2000);
  }

  if ( digitalRead(button_2) )
  {
   losing = losing + 1;
   delay(2000);
  }

  if(losing == 0 && winning == 0)
  {
   digitalWrite(blueLED_1, HIGH);
   digitalWrite(blueLED_2,HIGH);
   digitalWrite(redLED,HIGH);
   digitalWrite(greenLED,HIGH);
   delay(1000);
   digitalWrite(blueLED_1, HIGH);
   digitalWrite(blueLED_2,HIGH);
   digitalWrite(redLED,HIGH);
   digitalWrite(greenLED,HIGH);
   delay(1000);
  }
  else if (losing == 1) 
  {
    digitalWrite(blueLED_1, HIGH);
  }
  else if (losing == 2)
  {
    digitalWrite(blueLED_2, HIGH);
  }
  else if (losing == 3)
  {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    delay(200);
    digitalWrite(blueLED_1, LOW);
    digitalWrite(blueLED_2, LOW);
    digitalWrite(redLED, LOW);
    delay(200);
    digitalWrite(blueLED_1, HIGH);
    digitalWrite(blueLED_2, HIGH);
    digitalWrite(redLED, HIGH);
    delay(200);
    digitalWrite(blueLED_1, LOW);
    digitalWrite(blueLED_2, LOW);
    digitalWrite(redLED, LOW);
    delay(200);
    digitalWrite(blueLED_1, HIGH);
    digitalWrite(blueLED_2, HIGH);
    digitalWrite(redLED, HIGH);
    delay(3000);

    losing = 0;
    winning = 0;
  }
  else if (_____)
  {
     digitalWrite(greenLED, _____);
     delay(_____);
     digitalWrite(greenLED, _____);
     delay(_____);
     digitalWrite(greenLED, _____);
     delay(_____);
     digitalWrite(greenLED, _____);
     delay(_____);
     digitalWrite(greenLED, _____);
     delay(_____);
     digitalWrite(greenLED, _____);
     delay(3000);

    winning = _____;
    losing = _____;
  }

}
