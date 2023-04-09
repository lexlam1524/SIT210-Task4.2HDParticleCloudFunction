#define REDLED D3
#define GREENLED D2
#define BLUELED D1
int del = 400; // Milliseconds of delayment




void setup() {

// Making the LEDs outputs
pinMode(REDLED,OUTPUT);
pinMode(GREENLED, OUTPUT);
pinMode(BLUELED, OUTPUT);
Particle.function("BlinkLed",BlinkLed);
}



void loop() {


}


// This method  that will be called when particle function "trafficLight" will be called.
// This method takes color name as input string.
int BlinkLed(String color){
    // Reset all LEDs to off
    digitalWrite(REDLED,LOW);
    digitalWrite(BLUELED,LOW);
    digitalWrite(GREENLED,LOW);  

    if (color.equals("red")){
        digitalWrite(REDLED,HIGH);
        return 1;
    } else if (color.equals("blue")){
        digitalWrite(BLUELED,HIGH);
        return 1;
    } else if (color.equals("green")){
        digitalWrite(GREENLED,HIGH);
        return 1;
    }
    return -1;
}