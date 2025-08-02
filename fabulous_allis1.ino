// C++ code
//

int LED=8;                 //define a porta 8 como  saida 

void setup()
{
  pinMode(LED, OUTPUT);    // define o led como saida
}

void loop()
{
  digitalWrite(LED, HIGH);// acender o led 
  delay(1000);            // tempo do led aceso 1segundo 
  digitalWrite(LED, LOW); // apagar o led 
  delay(1000);            // tempo do led apagado 1segundo 
}