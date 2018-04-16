
const int tiltPin = A0; // Sensor Tilt na porta A0(Porta Analógica)
int rele = 7;      //Relé na porta digital 7

void setup() {
  Serial.begin(9600);        // Configura a comunicação seria com baud rate de 9600(velocidade)
  pinMode(tiltPin, INPUT); // Setando o sensor como saída
  pinMode(rele, OUTPUT); // Setando o relé como entrada
}
 
void loop() {
                    
  Serial.println(analogRead(tiltPin);); /// Printando para analizar os valores do sensor.
  if (analogRead(tiltPin) > 1000){   /// Se o valor do tilt estiver acima de 1000 faça:   
    digitalWrite(rele, LOW); // Sinal do relé baixo para passar a corrente e ligar o led
    delay(30); /// Tempo ajustavel caso necessário.
  }else{
    digitalWrite(rele, HIGH);// Sinal do relé alto para negar a corrente e desligar o led
  }
 
}                      
