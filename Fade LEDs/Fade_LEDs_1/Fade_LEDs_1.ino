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
  analogWrite(led1, 60);  //posar PWM de les sortides a 60   
  analogWrite(led2, 60);     
  analogWrite(led3, 60);     
  analogWrite(led4, 60);     
  analogWrite(led5, 60);     
  analogWrite(led6, 60);     
  delay(A);

  analogWrite(led1, 120);    // posar PWM de led sortides a 120
  analogWrite(led2, 120);    
  analogWrite(led3, 120);    
  analogWrite(led4, 120);    
  analogWrite(led5, 120);    
  analogWrite(led6, 120);
  delay(A);

  analogWrite(led1, 255);  //posar PWM de les sortides a 255  
  analogWrite(led2, 255);     
  analogWrite(led3, 255);     
  analogWrite(led4, 255);     
  analogWrite(led5, 255);     
  analogWrite(led6, 255);     
  delay(A);

  analogWrite(led1, 120);    // posar PWM de led sortides a 120
  analogWrite(led2, 120);    
  analogWrite(led3, 120);    
  analogWrite(led4, 120);    
  analogWrite(led5, 120);    
  analogWrite(led6, 120);
  delay(A);
}

//********** Funcions *************************************************************
