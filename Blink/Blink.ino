#define led 2

void setup() {
  led_setup();
}

void loop() {
  led_blink();
  while(!false);
}
