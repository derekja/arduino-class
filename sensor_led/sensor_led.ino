//The 10kohm resistor is coloured Brown - Black - Orange - Gold
//The 330ohm resistor is coloured Orange - Orange - Brown - Gold

//Initialize pins

int led = 13;               //Initialize pin 13 as LED
int button = 7;             //Initialize pin 7 as Push-Button
int val = 0;                //val will be used to store the state of the input pin
int sensor = 0;               // sensor value
int state_brightness = 0;  // reading from the sensor

void setup()  {
  Serial.begin (9600);
  pinMode(led, OUTPUT);     //Tell the Arduino LED is an output
  pinMode(button, INPUT);   //Tell the Arduino Push-Button is an input
}

void loop()  {
  val = digitalRead(button);    //Read the input and store it

if (val == HIGH)  {
   sensor = analogRead(0);
   if (sensor>128) {
    state_brightness = 1; //Turn LED on
    } else {
      state_brightness = 0; //Else turn LED off
    }
}
  Serial.println(button);
  Serial.println(sensor);
  //Serial.println(state_brightness);
  //Check whether the input has been pressed
  if (state_brightness == 1)  {
    digitalWrite(led, HIGH); //Turn LED on
    } else {
      digitalWrite(led, LOW); //Else turn LED off
    }

    button = 0;


    
}
