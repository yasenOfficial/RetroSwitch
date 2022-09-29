#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7
#define pin8 8

#include <Keyboard.h>

#define horzPin A1  // Analog output of horizontal joystick pin
#define vertPin A0  // Analog output of vertical joystick pin
#define selPin 9  // select button pin of joystick


int vertZero, horzZero;  // Stores the initial value of each axis, usually around 512
int vertValue, horzValue;  // Stores current analog output of each axis


void setup() {
    Keyboard.begin();
//
  pinMode (pin2, INPUT_PULLUP);
  pinMode (pin3, INPUT_PULLUP);
  pinMode (pin4, INPUT_PULLUP);
  pinMode (pin5, INPUT_PULLUP);
  pinMode (pin6, INPUT_PULLUP);
  pinMode (pin7, INPUT_PULLUP);
  pinMode (pin8, INPUT_PULLUP);

  Keyboard.begin();
  pinMode(selPin, INPUT);
  digitalWrite(selPin, HIGH);//
  pinMode(horzPin, INPUT);  // Set both analog pins as inputs
  pinMode(vertPin, INPUT);
  delay(1000);  // short delay to let outputs settle
  vertZero = analogRead(vertPin);  // get the initial values
  horzZero = analogRead(horzPin);  // Joystick should be in neutral position when reading these


}

void loop() {
 if(digitalRead(pin2) == LOW){
    Keyboard.press('2');
  }else{
    Keyboard.releaseAll();
  }
  if(digitalRead(pin3) == LOW){
    Keyboard.press('3');
  }else{
    Keyboard.releaseAll();//
  }
  if(digitalRead(pin4) == LOW){
    Keyboard.press('4');
  }else{
    Keyboard.releaseAll();//
  }
  if(digitalRead(pin5) == LOW){
    Keyboard.press('5');
  }else{
    Keyboard.releaseAll();//
  }
  if(digitalRead(pin6) == LOW){
    Keyboard.press('6');
  }else{
    Keyboard.releaseAll();//
  }
  if(digitalRead(pin7) == LOW){
    Keyboard.press('7');
  }else{
    Keyboard.releaseAll();//
  }
  if(digitalRead(pin8) == LOW){
    Keyboard.press('8');
  }else{
    Keyboard.releaseAll();//
  }



  horzValue = analogRead(horzPin);
vertValue = analogRead(vertPin);
   if(vertValue > 800)
   {
   Keyboard.press('d');
   }else if(vertValue < 400)
   {
    Keyboard.press('a');
   }else
   {
    Keyboard.releaseAll();
   }
   
   if(horzValue > 800)
   {
   Keyboard.press('w');
   }else if(horzValue < 400)
   {
    Keyboard.press('s');

   }else{
      Keyboard.releaseAll();
   }

   if(digitalRead(selPin)==LOW)
   {
        Keyboard.press('q');
   }else{
        Keyboard.releaseAll();
   }

}
