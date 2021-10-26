
/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula1 = 1;
int taula2 = 2;
int taula3 = 3;
int taula4 = 4;
int taula5 = 5;
int taula6 = 6;
int taula7 = 7;
int taula8 = 8;
int taula9 = 9;
int taula10 = 10;
//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula1);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula1);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula1*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de2 ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de3 ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula3);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula3*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de4 ");
  Serial.println(taula4);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula4);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula4*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de5 ");
  Serial.println(taula5);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula5);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula5*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de6 ");
  Serial.println(taula6);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula6);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula6*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de7 ");
  Serial.println(taula7);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula7);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula7*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de8 ");
  Serial.println(taula8);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula8);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula8*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de9 ");
  Serial.println(taula9);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula9);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula9*i);    
  }
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar de10 ");
  Serial.println(taula10);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula10);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula10*i);    
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
