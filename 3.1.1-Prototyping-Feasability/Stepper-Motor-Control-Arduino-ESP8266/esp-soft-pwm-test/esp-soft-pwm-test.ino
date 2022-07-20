#define ENABLE 5
#define DIRECTION 4
#define SPEED 14

volatile uint8_t last_state = 0;
//
//void gosteps(int steps, float speed){
//
//  // todo go for rotations or even mm instead of steps 
//  // steps might get too big value if one rotation is 200 steps
//  
//  // 100% speed = delay = 30 ms
//  // with lower speed delay gets bigger
//
//  // speed is a value between 0 and 1 
//  
//  int delaytime = 30 * speed;
//
//  for(int i=0;i++;i<steps){
//  Toggle();
//  delayMicroseconds(delaytime);
//  }
//}


void Toggle(){
   if (last_state){
    digitalWrite(SPEED,LOW);
    last_state = 0;
   } else {
        digitalWrite(SPEED,HIGH);
        last_state =1;
    }
  }


void gosteps(int steps){

  // todo go for rotations or even mm instead of steps 
  // steps might get too big value if one rotation is 200 steps
  
  // 100% speed = delay = 30 ms
  // with lower speed delay gets bigger

  // speed is a value between 0 and 1 


//  fullstep 500mys interval
// 1/8 step 40-50 mys interval 

  for(volatile int i=0;i<steps;i++){
  Toggle();
  delayMicroseconds(250);
  Toggle();
//  delay(1000);
  delayMicroseconds(250);
  }
}

void setup() {
  pinMode(ENABLE, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(DIRECTION, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(SPEED, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  //setPwmFrequency(10, 1024);
  // analogWrite(SPEED, 256);
  digitalWrite(DIRECTION, HIGH);
  digitalWrite(ENABLE, LOW); 

}



// the loop function runs over and over again forever
void loop() {

//  Toggle();
//  delayMicroseconds(30);

//  digitalWrite(ENABLE, LOW); 
  gosteps(400);
//  digitalWrite(ENABLE, HIGH);   // Turn the LED on (Note that LOW is the voltage level

  delay(1000);
  
  delay(1000);
  
  delay(1000);
  
  delay(1000);
  
  delay(1000);
  
  delay(1000);
  // but actually the LED is on; this is because
  // it is active low on the ESP-01)
  //delay(100);                      // Wait for a second
   // Turn the LED off by making the voltage HIGH
  
//  delay(1);                      // Wait for two seconds (to demonstrate the active low LED)
//  if (PWM_Freq1 < 12000){
//    PWM_Freq1 += 5;
//  } else {
//    PWM_Freq1 = 5;
//    if (digitalRead(DIRECTION)){
//      digitalWrite(DIRECTION, LOW);
//    } else {
//      digitalWrite(DIRECTION, HIGH);
//      }
//      
//   }
//  PWM_Period1 = 1000000 / PWM_Freq1;

}
