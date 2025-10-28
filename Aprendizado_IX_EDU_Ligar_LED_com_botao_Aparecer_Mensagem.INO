// Entrada e saída de dados:

int botao = 11; 
int led = 13; 
int val = 0; 


void setup() {

 Serial.begin(9600);
 
  pinMode (botao, INPUT);
  pinMode (led, OUTPUT);
  
}
           
 void loop () {
           
 
 val = digitalRead (botao);
  
   while (val == HIGH) {
   
   
 
  Serial.println ("Ligado");
     
  digitalWrite (led, HIGH); 
//  delay (500);    
  
  val = digitalRead (botao);
     
  delay (50);
     
   
   }
           
  Serial.println ("Desligado");
   digitalWrite (led, LOW);
   delay (2000);
   
}
