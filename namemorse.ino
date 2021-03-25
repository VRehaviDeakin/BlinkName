int led1 = D7; //unnecsary for this project but useful to give led's names rather than refer to the pin.

void setup() {
    
    pinMode(led1, OUTPUT); //set led to send voltage
    
    digitalWrite(led1, LOW); //set it off just to avoid confusion

}

void loop() {

//V
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(3000);
digitalWrite(led1, LOW);
delay(3000);


//E
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(3000);


//S
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(3000);

//A
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(3000);
digitalWrite(led1, LOW);
delay(3000);

//L
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(3000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
delay(1000);
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);


delay(10000); //long delay to make it easier to find start/finish point


    
}


