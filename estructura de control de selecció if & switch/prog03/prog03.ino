/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
  } 
  
  else if (tempAigua > 100)
   {
    Serial.print("Aigua bullint!");
   } 
  else if (tempAigua >=90)
   {
    Serial.print("Aigua a punt de bullir");
   }
  else
   {
    Serial.print("Aigua encara no bull");
   }
}


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
