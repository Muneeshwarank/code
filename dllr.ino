#include <avr/io.h>     
#include <util/delay.h> 
const int led=9; 
const int temp=A0;
int temp_val;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  temp_val=analogRead(temp);
 int temperature=temp_val*0.4887;
  Serial.println(temperature);
  if(temperature>30)
  {
  digitalWrite(led,HIGH);
  Custom_Delay(500);
  digitalWrite(led,LOW);
  Custom_Delay(500);
  }
  else
  {
    digitalWrite(led,HIGH);
  Custom_Delay(250);
  digitalWrite(led,LOW);
  Custom_Delay(250);
  }
}

void Custom_Delay(unsigned int ms) 
{
    
    for (unsigned int i = 0; i < ms; i++) 
    {
        _delay_ms(1); 
    }
}
 

 

