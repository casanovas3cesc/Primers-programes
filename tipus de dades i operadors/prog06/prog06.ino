/*******************************************************************
 * *                                                              **
 * *                                                              **
 * *                           TÍTOL:                             **                           
 * *                                                              **
 * *                          Nom representatiu                   **
 * *                                                              **
 * * NOM:Cesc Casanovas                                10/12/2018 **
 * ****************************************************************/


//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 4;
int h = 0;
int r= (sqrt(sq(a)+sq(b)));
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600); 
  
  Serial.println("Let's calculate hypotaneuse");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(r);



}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
