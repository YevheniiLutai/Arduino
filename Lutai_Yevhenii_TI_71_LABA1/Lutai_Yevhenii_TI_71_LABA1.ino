boolean buttonWasUp = true;
boolean ledEnabled = false;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
 
void loop() {
   
   boolean buttonIsUp = digitalRead(2);
     if (buttonWasUp && !buttonIsUp) {
      delay(10);

    buttonIsUp = digitalRead(2);

       if (!buttonIsUp) {
         ledEnabled = !ledEnabled;
         digitalWrite(13, ledEnabled);
      }
   }
    buttonWasUp = buttonIsUp;
}
