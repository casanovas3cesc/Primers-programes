
/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
** Cesc Casanovas                                                       03/12/18 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("");  
  Serial.println("Escull el numero de l'opercio que vols realitzar?"); // prints Hello world! with brake line
  Serial.println("  1. Comprovar numero de tarjeta de credit");
  Serial.println("  2. Comprovar numero de compte bancari");
  Serial.println("  3. Buscar un digit perdut de tarjeta de credit");  
}

//********** Loop *****************************************************************
void loop()   // run over and over again
{
           // do nothing
}

//********** Funcions *************************************************************
