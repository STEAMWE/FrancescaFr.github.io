/*DS3231_Serial_Hard + Button_Test
 * 
 * This program allows a user to set an alarm based on the day of the week and the time of day.
 * It then sounds the alarm at the specified time, and will be silenced by the pressing of the button.
 * Uncomment the set time values in the void setup to reset the clock, then download the program to the arduino
 * Re-comment the set time values to run the regular program.
 * 
 * RTC Hookup:
 * ----------------------
 * DS3231:  SDA pin   -> Arduino Analog 4 or the dedicated SDA pin
 *          SCL pin   -> Arduino Analog 5 or the dedicated SCL pin
 *
 * User Input Hookup:
 * Potentiometer connected to 5V + GND, with data pin going to A3.
 * Button is connected to 3.3V with other side connected to data pin 2 and a 10K resistor going to GND.
 * Hookup whatever alarm mechanism (piezo, led, etc.) to pin 13.
 * 
 */

#include <DS3231.h>

int buttonpress = 0;
int selection = 0;
int MIN = 0;
int HRS = 0;
int DOW = 0;
int pressnumber = 0;
String Day = " ";

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);

// Init a Time-data structure
Time  t;

void setup()
{

  // Setup Serial connection
  Serial.begin(115200);

  // Initialize the rtc object
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(9, 34, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(8, 8, 2018);   // Set the date to January 1st, 2014
  
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(A3,INPUT);

  Serial.println("Please Enter Alarm Time");
}
 
void loop()
{
  while(pressnumber < 4)
  {
    selection = analogRead(A3);
  // Serial.println(selection);
  buttonpress = digitalRead(2);
  if(buttonpress == HIGH)
  {
    pressnumber = pressnumber + 1;
    //digitalWrite(13,HIGH);
   while(pressnumber == 1)
   {
    Serial.print("Enter Day of Week (1 = MON): ");
    DOW = analogRead(A3) / 25;
    Serial.println(DOW);
    delay (1000);
    int subpress = digitalRead(2);
    
    if(subpress ==HIGH)
    {
      pressnumber = pressnumber + 1;
      DOW = analogRead(A3) /25;
      Serial.print("Day of Week: ");
      Serial.println(DOW);
    }
   }
  } 
  while(pressnumber == 2)
   {
    Serial.print("Enter Hour of Day (24hrs): ");
    selection = analogRead(A3) /25 ;
    Serial.println(selection);
    delay (1000);
    int subpress = digitalRead(2);
    
    if(subpress == HIGH)
    {
      pressnumber = pressnumber + 1;
      HRS = analogRead(A3) / 25 ;
      // Serial.print("Time of Alarm ");
      Serial.println(HRS);
    }
   }
   while(pressnumber == 3)
   {
    Serial.print("Enter Minute of Hour: ");
    selection = analogRead(A3) /16;
    Serial.println(selection);
    delay (1000);
    int subpress = digitalRead(2);
    
    if(subpress ==HIGH)
    {
      pressnumber = pressnumber + 1;
      MIN = analogRead(A3) / 16 ;
      //Serial.print("Minute of Alarm ");
      Serial.println(MIN);
    }
   }
  if(pressnumber > 3)
  {

    if(DOW == 1)
    {
       Day = "Monday";
    }
    if(DOW == 2)
    {
       Day = "Tuesday";
    }
    if(DOW == 3)
    {
       Day = "Wednesday";
    }
    if(DOW == 4)
    {
       Day = "Thursday";
    }
    if(DOW == 5)
    {
       Day = "Friday";
    }
    if(DOW == 6)
    {
       Day = "Saturday";
    }
    if(DOW == 7)
    {
      String Day = "Sunday";
    }

    Serial.print("Alarm Set to: ");
    Serial.print(Day);
    Serial.print(" at ");
    Serial.print(HRS); 
    Serial.print(":");
    Serial.println(MIN);
    }
    
     digitalWrite(13,LOW);
  }

  int silencer = 0;
  // Get data from the DS3231
  
  t = rtc.getTime();
  
  if(t.dow == DOW) // Check to see if there is an alarm today.
  {
    Serial.println("Alarm set for Today");
  }

   if(t.hour == HRS) // Check to see if there is an alarm this hour
  {
    if(t.min == MIN) // if it is the right minute of the hour, set off alarm
    {
      while(silencer == 0)
      {
        digitalWrite(13, HIGH); // Turn on alarm
        if(buttonpress == HIGH) //if silence button is pressed, turn off alarm
        {
          silencer = 1;
          digitalWrite(13,LOW);
        }

        delay (60000); // Wait a minute so that alarm doesn't go off again.
      }
      
    }
  }
  // Send date over serial connection
 // Serial.print("Today is the ");
  //Serial.print(t.date, DEC);
  //Serial.print(". day of ");
 // Serial.print(rtc.getMonthStr());
 // Serial.print(" in the year ");
 // Serial.print(t.year, DEC);
 // Serial.println(".");
  
  // Send Day-of-Week and time
  Serial.print("It is the ");
  Serial.print(t.dow, DEC);
  Serial.print(". day of the week (counting monday as the 1st), time is ");
  Serial.print(t.hour, DEC);
  //Serial.print(" hour(s), ");
  //Serial.print(":");
  Serial.println(t.min, DEC);
  //Serial.print(" minute(s) and ");
  //Serial.print(t.sec, DEC);
  //Serial.println(" second(s) since midnight.");

  // Send a divider for readability
  //Serial.println("  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -");
  
  // Wait one second before repeating :)
  delay (1000);
}
