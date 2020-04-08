/* Use a photoresistor (or photocell) to turn on an LED in the dark
   More info and circuit schematic: http://www.ardumotive.com/how-to-use-a-photoresistor-en.html
   Dev: Michalis Vasilakis // Date: 8/6/2015 // www.ardumotive.com */
   

//Constants
const int pResistor = A0; // Photoresistor at Arduino analog pin A0

//Variables
int value;          // Store value from photoresistor (0-1023)

void setup(){
 Serial.begin(9600);
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop(){
  value = analogRead(pResistor);
  Serial.println(value);
 
  
}
