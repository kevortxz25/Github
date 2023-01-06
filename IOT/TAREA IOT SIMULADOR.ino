int pushButton =3;
int LED = 4;
int LEDY = 5;
int val = 0;
//int (is a variable)'...'(is the new name of the variable) = '...' (declaring what port it is conected to) <br>

void setup(){
  pinMode(LEDY, OUTPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}
// if its inside{} then it will correspond with the other code inside those{}.
// {} = curly brackets
//LEDY = my yellow LED	LED = my white LED
// we have now labelled the LEDs as outputs and push buttons as input as well as setup the serial port.

void loop()
{
  int buttonState = digitalRead(pushButton); // new variable is always what the button is 0/1
  
  if (buttonState > 0){						//
    val = digitalRead(LED);
    Serial.print("buttonState = ");
    Serial.print(buttonState);
    Serial.print("	val = ");
    Serial.println(val);
    
    if (val ==1){
      digitalWrite(LED, LOW);
      digitalWrite(LEDY, HIGH);
    }
    
    else if (val == 0){
      digitalWrite(LED, HIGH);
      digitalWrite(LEDY, LOW);
    }

// this code turns one light on and the other off according to one of the LEDs state.
    
    do
    {delay(1);
    } while (digitalRead(pushButton) == 1);
  }
}