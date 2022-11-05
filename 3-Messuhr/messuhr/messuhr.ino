#define dial_gauge_request_pin 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(4800,SERIAL_7E2 ,16,17);
  pinMode(dial_gauge_request_pin, OUTPUT);
  digitalWrite(dial_gauge_request_pin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  // pin xy high and wait for signal 

digitalWrite(dial_gauge_request_pin,LOW);
delay(100);
digitalWrite(dial_gauge_request_pin,HIGH);
delay(35);

  if (Serial2.available()){
    
    while(Serial2.available()){
      
      Serial.print(char(Serial2.read()));

    }
    Serial.println("");
  }
delay(250);
}
