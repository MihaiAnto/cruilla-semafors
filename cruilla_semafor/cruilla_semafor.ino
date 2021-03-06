/**********************************************************************************
**                                                                               **
**                              Cruïlla de semàfors                              **
**                                                                               **
** Mihai Anton                                                    11/02/2019     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
unsigned long tm = 500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
//1.
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(tm);                  // es queden leds 500ms encesos
//2.  
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//3.
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//4.  
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//5.
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//6.
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//7.
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//8.
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//9.
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//10.
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//11.
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//12.
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
//13.
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(tm);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************
