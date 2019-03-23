void setup() {
  led_setup();
}

void loop() {
  led_blink();
  led_strobe();
  while(!false);
}
