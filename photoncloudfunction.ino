int greenLed = D0;
int blueLed = D1;
int redLed = D2;

void setup() {
    Particle.function("led", user_input);
    pinMode(greenLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

int ledstate(int ledcolour){
    if (digitalRead(ledcolour) == LOW) {
        digitalWrite(ledcolour, HIGH);
    }
    else if (digitalRead(ledcolour) == HIGH) {
        digitalWrite(ledcolour, LOW);
    }
}

int user_input(String led) {
    if (led == "green") {
        ledstate(greenLed);
    }
    
    else if (led == "blue") {
        ledstate(blueLed);
    }
    
    else if (led == "red") {
        ledstate(redLed);
    }
    return 1;
}


void loop() {
}