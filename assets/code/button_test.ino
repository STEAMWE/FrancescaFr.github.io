
/* This code simulates a user interface/menu inputs.
 *  
 * User is presented with a home screen, pressing the button once brings up an option to enter a value with the 
 * potentiometer, reading out the value as the user changes it. The user then hits the button again to confirm, 
 * moving on to the next user option. This process repeats until all the options have been inputted, then the user
 * is returned to the homescreen, where a final value, based off of their inputs, is printed to the screen.
 * 
 * Hardware Hookup:
 * Potentiometer connected to 5V + GND, with data pin going to A3.
 * Button is connected to 3.3V with other side connected to data pin 2 and a 10K resistor going to GND.
 * 
 */
int buttonpress = 0;
int selection = 0;
int gallons = 0;
int People = 0;
int pressnumber = 0;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(A3,INPUT);
  // Setup Serial connection
  Serial.begin(115200);
  Serial.println("HOME SCREEN");
}

void loop()
{

  selection = analogRead(A3);
  // Serial.println(selection);
  buttonpress = digitalRead(2);

  if(buttonpress == HIGH)
  {
    pressnumber = pressnumber + 1;
    digitalWrite(13,HIGH);
   while(pressnumber == 1)
   {
    Serial.print("Enter # of People: ");
    selection = analogRead(A3) / 25;
    Serial.println(selection);
    delay (1000);
    int subpress = digitalRead(2);
    
    if(subpress ==HIGH)
    {
      pressnumber = pressnumber + 1;
      People = analogRead(A3) /25;
      Serial.print("Number of People: ");
      Serial.println(People);
    }
   }
  } 
  while(pressnumber == 2)
   {
    Serial.print("Enter # of Gallons Per Person: ");
    selection = analogRead(A3) /2 ;
    Serial.println(selection);
    delay (1000);
    int subpress = digitalRead(2);
    
    if(subpress ==HIGH)
    {
      pressnumber = pressnumber + 1;
      gallons = analogRead(A3) / 2 ;
      Serial.print("Number of Gallons Per Person: ");
      Serial.println(gallons);
    }
   }
  if(pressnumber > 3)
  {
    Serial.print("Household Water Allowance: ");
    Serial.println(gallons*People);
    
    pressnumber = 0;
  }
   
  else
  {
    digitalWrite(13,LOW);
  }
  // Wait 1/2 a sec before repeating :)
  delay (500);
}
