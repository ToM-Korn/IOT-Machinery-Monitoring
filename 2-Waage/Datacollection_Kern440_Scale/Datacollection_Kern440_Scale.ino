//volatile char scale_data[18]

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600,SERIAL_8N1 ,16,17);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Make Tara on Scale 
  // The Scale beeps once the Tara is made
  //Serial2.write("t");

  // Wait for 
  delay(5000);

  // Send Command to receive "stable" data
  Serial2.write("s");

  if (Serial2.available()){


    while(Serial2.available()){
      
      Serial.print(char(Serial2.read()));

    }
    //Serial.println(scale_data);
  }

  delay(5000);

}
