/*

*/

#include <Servo.h>

Servo servo0;
Servo servo1;
int angle;

int randomNumber;
void setup() {
  servo0.attach(5);
  servo0.write(0);
  servo1.attach(6);
  servo1.write(0);
  randomSeed(analogRead(0));
}

void loop() 
{ 
  randomNumber = random(2);// 0, 1


  delay(random(2001));
  if (randomNumber == 1)
  {
    Jab();
  }else
  {
    Hook();
  }
  delay(2000);

  for(angle = 90; angle > 1; angle--)  
  {                                  
    servo1.write(angle);    
    delay(1);
  } 

  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo0.write(angle);  
    delay(1);
  } 

 // scan from 0 to 180 degrees
  //for(angle = 10; angle < 180; angle++)  
  //{                                  
  //  servo0.write(angle);  
  //  servo1.write(angle);        
  //  delay(3);                   
  //} 
  // now scan back from 180 to 0 degrees
  //for(angle = 180; angle > 10; angle--)    
  //{                                
  //  servo0.write(angle);
  //  servo1.write(angle);                   
  //  delay(3);       
  //} 
}

void Hook()
{
  for(angle = 0; angle < 90; angle++)  
  {                       
    servo1.write(angle);                 
  } 
  for(angle = 180; angle > 90; angle--)  
  {                                  
    servo0.write(angle);               
  } 
}
void Jab()
{
  for(angle = 0; angle < 90; angle++)  
  {                           
    servo1.write(angle); //            
  } 
  for(angle = 180; angle > 0; angle--)  
  {                                  
    servo0.write(angle);  
                      
  } 
}
