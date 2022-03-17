#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

const int btn = 9;
const int led = 8;

void setup()
{
  Serial.begin(9600);
  
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);

  lcd.begin(16,2);

  lcd.setCursor(0,0);
  lcd.print( "Press button to:");
}

bool buttonPressed = false;

void loop(){
  //<code>
  if (digitalRead(btn) == HIGH){
    if (buttonPressed == true){ 
      digitalWrite(led,HIGH);
      lcd.setCursor(0,1);
      lcd.print("turn off");
      buttonPressed = false;
      Serial.println("Light turned on");
    }
    else{
      digitalWrite(led,LOW);
      lcd.setCursor(0,1);
      lcd.print("turn on ");
      buttonPressed = true;
      Serial.println("Light turned off");
    }
    delay(75);
  }
  //<code\>
}

//<functions>

//<functions\>
