int relay1 = 10;
int val;
void setup() {
  Serial.begin(9600); //Tx0 and Rx0  //Set Baud Rate to 9600 for Serial Communication Tx0 and Rx0
  Serial1.begin(9600);
  pinMode(10, OUTPUT);
}
void loop() {
  if (Serial1.available() > 0){
   int buffer_value = Serial1.read();
    if(buffer_value == '1' || buffer_value == '1')
    {
       digitalWrite(10, HIGH);    //Turn ON LED
      Serial.println("LED ON");  //Arduino Terminal of Desktop 
      Serial1.println("LED ON"); //Bluetooth Terminal on Mobile
    }
    else if(buffer_value == '0' || buffer_value == '0')
    {
      digitalWrite(10, LOW);      //Turn OFF LED
      Serial.println("LED OFF");  //Arduino Terminal on Desktop
      Serial1.println("LED OFF"); //Bluetooth Terminal on Mobile 
    }
  }
}
    
