// what if we need to connect the diode (e.g. green diode) to other pin?
// let's define the function for this

// these are preprocessors
// before compiler starts, 
// the programm replace RED_PIN, YELLOW and GREEN_PIN by pin numbers
// we create pin names (like any preprocessors) by ourselves

#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

// create variables for diods durations

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 500;
int green_blink = 500;
int yellow_on = 1000;

void setup() {
  // ports that diodes connected to
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

}

void loop() {
  // turn on the voltage on RED_PIN
  digitalWrite(RED_PIN, HIGH);
  // wait while red is on
  delay(red_on);
  // turn on the voltage on YELLOW_PIN
  digitalWrite(YELLOW_PIN, HIGH);
  delay(red_yellow_on);

  // turning off RED and YELLOW pins
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(green_on);
  digitalWrite(GREEN_PIN, LOW);

  // turn on the green one 3 times
    for(int i = 0; i < 3; i = i+1)
  {
    delay(green_blink);
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blink);
    digitalWrite(GREEN_PIN, LOW);
  }
  // then YELLOW only
    digitalWrite(YELLOW_PIN, HIGH);
    delay(yellow_on);
    digitalWrite(YELLOW_PIN, LOW); 
}
