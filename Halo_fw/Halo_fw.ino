

int red1 = 7;
int red2 = 8;
int white1 = 5;
int white2 = 10;



// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(white1, OUTPUT);
  pinMode(white2, OUTPUT);

  pinMode(1, OUTPUT);
  digitalWrite(1, LOW);

  pinMode(0, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);

  digitalWrite(red1, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(red2, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(white1, HIGH);  // turn the LED on (HIGH is the voltage level)
        digitalWrite(white2, HIGH);  // turn the LED on (HIGH is the voltage level)
}

unsigned long prevMill = 0;
bool status = false;
// the loop function runs over and over again forever
void loop() {

  if (digitalRead(2) == LOW) {
    if (millis() - prevMill > 5000) {
      prevMill = millis();

      status = !status;

      if (status) {
        digitalWrite(red1, HIGH);   // turn the LED on (HIGH is the voltage level)
        digitalWrite(red2, HIGH);   // turn the LED on (HIGH is the voltage level)
        digitalWrite(white1, LOW);  // turn the LED on (HIGH is the voltage level)
        digitalWrite(white2, LOW);  // turn the LED on (HIGH is the voltage level)
      } else {
        digitalWrite(red1, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(red2, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(white1, HIGH);  // turn the LED on (HIGH is the voltage level)
        digitalWrite(white2, HIGH);  // turn the LED on (HIGH is the voltage level)
      }
    }
  } else {
    digitalWrite(red1, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(red2, LOW);     // turn the LED on (HIGH is the voltage level)
        digitalWrite(white1, LOW);  // turn the LED on (HIGH is the voltage level)
        digitalWrite(white2, LOW);  // turn the LED on (HIGH is the voltage level)
  }
}
