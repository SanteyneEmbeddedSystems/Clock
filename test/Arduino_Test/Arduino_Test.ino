extern "C" {
    #include "Test_Clock.h"
}

void setup( void )
{
    Serial.begin(9600);
    while (!Serial) {
    }
    Serial.println("Serial communication ready");
}


void loop( void )
{
    static uint32_t last_time = 0;
    uint32_t current_time;
    E_Day day = SUNDAY;
    uint8_t hour = 0;
    uint8_t minute = 0;
    uint8_t second = 0;
    
    current_time = micros();
    
    if( current_time - last_time > 5000 )
    {
        last_time = current_time;

        Clock__Tick( &Test_Clock );
    }
    Test_Clock__Data.Get_Clock( &day, &hour, &minute, &second );
    Serial.print("Clock : ");
    Serial.print(day);
    Serial.print(" ");
    Serial.print(hour);
    Serial.print(":");
    Serial.print(minute);
    Serial.print(":");
    Serial.print(second);
    Serial.println("");
}