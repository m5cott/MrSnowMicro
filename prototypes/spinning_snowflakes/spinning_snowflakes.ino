// Global Variables
const int led[4] = {2, 4, 6, 8}; // 4 Led snowflakes - blue, white, blue, white
const int button = 10; // on and off switch

// initial state of switch  = low
int buttonState = 0;

void setup() {
  for (int num = 0; num < 4; num+=1) {
    pinMode(led[num], OUTPUT);
  }
  pinMode(button, INPUT);
}
void loop() {
  // checking on/off switch state
  buttonState = digitalRead(button);
  
  if (buttonState == HIGH) {
    // loops forward through leds
    for(int forward = 0; forward < 4; forward+=1) {
      digitalWrite(led[forward], HIGH);
      delay(100);
      digitalWrite(led[forward], LOW);    
    }
    // loops backward through leds
    for(int back = 3; back >=0; back-=1) {
      digitalWrite(led[back], HIGH);
      delay(100);
      digitalWrite(led[back], LOW);
    }    
  } else {
    for(int off = 0; off < 4; off+=1) {
      digitalWrite(led[off], LOW);
    }
  }
}
