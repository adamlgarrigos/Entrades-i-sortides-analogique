/**********************************************************************************
**                                                                               **
**                              Avisador Acústic                                 **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int pitido = 9;        // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino

int v0;                 // guardar valor del ldr  
int v1;
int v2;
int freq;                    // freqüència del xiulet

//********** Setup ****************************************************************
void setup()
{
  pinMode(pitido, OUTPUT);     // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  v0 = analogRead(ldr0);   // llegir valor ldr
  v1 = analogRead(ldr1);   
  v2 = analogRead(ldr2);
  
  freq = min(v0, v1);  // veure quin ldr té objecte més aprop
  freq = min(v2, freq);
  freq = map(freq, 0, 1000, 2000, 0);   // mapejar valor de 0-1023 a 2000-10
  
  tone(pitido, freq, 100);   // xiulet de durada 300ms
  delay(100+100);            // esperar xiulet + silenci
}

//********** Funcions *************************************************************
