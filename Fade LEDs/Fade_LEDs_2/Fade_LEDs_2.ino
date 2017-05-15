/**********************************************************************************
**                                                                               **
**                         Sortides i entrades analogiques                       **
**                                  fade LED                                     **
**                                                                               **
** ADAM LAAOUAJ                                                                  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;
int led6 = 11;
int A = 400;
//********** Setup ****************************************************************
void setup()
{
  pinMode( led1 , OUTPUT ); //posar els leds com a sortides
  pinMode( led2 , OUTPUT );
  pinMode( led3 , OUTPUT );
  pinMode( led4 , OUTPUT );
  pinMode( led5 , OUTPUT );
  pinMode( led6 , OUTPUT );
  
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led1, 0);   
  analogWrite(led2, 0);     
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     
  analogWrite(led6, 0);     
  delay(A);

  analogWrite(led1, 0);    // posar PWM de led sortides a 120
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  analogWrite(led6, 40);
  delay(A);

  analogWrite(led1, 0);  //posar PWM de les sortides a 255  
  analogWrite(led2, 0);     
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 40);     
  analogWrite(led6, 80);     
  delay(A);

  analogWrite(led1, 0);    // posar PWM de led sortides a 120
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 40);    
  analogWrite(led5, 80);    
  analogWrite(led6, 120);
  delay(A);

  analogWrite(led1, 0);   
  analogWrite(led2, 0);     
  analogWrite(led3, 40);     
  analogWrite(led4, 80);     
  analogWrite(led5, 120);     
  analogWrite(led6, 160);     
  delay(A);
  
  analogWrite(led1, 0);   
  analogWrite(led2, 40);     
  analogWrite(led3, 80);     
  analogWrite(led4, 120);     
  analogWrite(led5, 160);     
  analogWrite(led6, 210);     
  delay(A);

  analogWrite(led1, 40);   
  analogWrite(led2, 80);     
  analogWrite(led3, 120);     
  analogWrite(led4, 160);     
  analogWrite(led5, 210);     
  analogWrite(led6, 255);     
  delay(A);
  
  analogWrite(led1, 80);   
  analogWrite(led2, 120);     
  analogWrite(led3, 160);     
  analogWrite(led4, 210);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);

  analogWrite(led1, 120);   
  analogWrite(led2, 160);     
  analogWrite(led3, 210);     
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);

  analogWrite(led1, 160);   
  analogWrite(led2, 210);     
  analogWrite(led3, 255);     
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);

  analogWrite(led1, 210);   
  analogWrite(led2, 255);     
  analogWrite(led3, 255);     
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);

  analogWrite(led1, 255);   
  analogWrite(led2, 255);     
  analogWrite(led3, 255);     
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);
}

//********** Funcions *************************************************************
