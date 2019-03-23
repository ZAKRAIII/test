#define led 3

void led_setup(){
  pinMode(led, OUTPUT);
}

void led_blink(){
  for (int i=0; i<5; i++){
    digitalWrite(led, HIGH);delay(500);
    digitalWrite(led, LOW);delay(500);
  }
}

void led_strobe(){
  ;
}
