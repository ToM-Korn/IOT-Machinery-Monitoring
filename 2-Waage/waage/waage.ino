volatile char scale_data[18]

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600,SERIAL_8N1 ,16,17);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial2.available()){
    
    while(Serial2.available()){
      
      Serial.print(char(Serial2.read()));

    }
    Serial.println(scale_data);
  }
}
