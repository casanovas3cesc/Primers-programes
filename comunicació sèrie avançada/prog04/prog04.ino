//********** Variables ********************************************************
long num;             
long residu;   

void setup() { 
  Serial.begin(9600);     
  Serial.println("Entra el DNI");
}

void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    num = Serial.parseInt();// look for valid int the incoming serial stream
  
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    residu = num%23;
    {
      if (residu==7)
      {
      Serial.print(num);
      Serial.println("-F");
      }
      else
      {
      
      Serial.print(num);
      Serial.println(" és parell");
      }
    }
    Serial.println("Entra un número");
  }
}
}
