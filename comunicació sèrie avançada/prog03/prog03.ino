//********** Variables ********************************************************
int numero=10;             // variables for the R's
  // variables for the results

//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un número?");
}
//********** Loop *************************************************************
void loop() {
  numero=numero%2;
 while (numero!=0)
   numero=Serial.parseInt();

  Serial print(numero);
  
}
