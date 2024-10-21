#include "Test_Clock.h"


/*============================================================================*/
/* Component_Prototype */
/*============================================================================*/
Clock_Var Test_Clock_Var = {
    .Clock_Timestamp = 0,
    .Time_Carrier = 0,
    .Day = SUNDAY,
    .Hour = 23,
    .Minute = 59,
    .Second = 55
};

const Clock Test_Clock = {
    .var_attr = &Test_Clock_Var
};


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
static void Test_Clock__Data__Get_Clock( 
    E_Day* day,
    uint8_t* hour,
    uint8_t* minute,
    uint8_t* second )
{
    Clock__Data__Get_Clock( &Test_Clock, day, hour, minute, second );
}
static void Test_Clock__Data__Get_Day( E_Day* day )
{
    Clock__Data__Get_Day( &Test_Clock, day );
}
static void Test_Clock__Data__Get_Hour( uint8_t* hour )
{
    Clock__Data__Get_Hour( &Test_Clock, hour );
}
static void Test_Clock__Data__Get_Minute( uint8_t* minute )
{
    Clock__Data__Get_Minute( &Test_Clock, minute );
}
static void Test_Clock__Data__Get_Second( uint8_t* second )
{
    Clock__Data__Get_Second( &Test_Clock, second );
}

const Clock_Data Test_Clock__Data = {
    .Get_Clock = Test_Clock__Data__Get_Clock,
    .Get_Day = Test_Clock__Data__Get_Day,
    .Get_Hour = Test_Clock__Data__Get_Hour,
    .Get_Minute = Test_Clock__Data__Get_Minute,
    .Get_Second = Test_Clock__Data__Get_Second
};
/*----------------------------------------------------------------------------*/
static void Test_Clock__Setting__Set_Clock(
    E_Day day,
    uint8_t hour,
    uint8_t minute,
    uint8_t second )
{
    Clock__Setting__Set_Clock( &Test_Clock, day, hour, minute, second );
}
static void Test_Clock__Setting__Increment_Day( void )
{
    Clock__Setting__Increment_Day( &Test_Clock );
}
static void Test_Clock__Setting__Increment_Hour( void )
{
    Clock__Setting__Increment_Hour( &Test_Clock );
}
static void Test_Clock__Setting__Increment_Minute( void )
{
    Clock__Setting__Increment_Minute( &Test_Clock );
}
static void Test_Clock__Setting__Increment_Second( void )
{
    Clock__Setting__Increment_Second( &Test_Clock );
}
static void Test_Clock__Setting__Decrement_Day( void )
{
    Clock__Setting__Decrement_Day( &Test_Clock );
}
static void Test_Clock__Setting__Decrement_Hour( void )
{
    Clock__Setting__Decrement_Hour( &Test_Clock );
}
static void Test_Clock__Setting__Decrement_Minute( void )
{
    Clock__Setting__Decrement_Minute( &Test_Clock );
}
static void Test_Clock__Setting__Decrement_Second( void )
{
    Clock__Setting__Decrement_Second( &Test_Clock );
}

const Clock_Setting Test_Clock__Setting =
{
    .Set_Clock = Test_Clock__Setting__Set_Clock,
    .Increment_Day = Test_Clock__Setting__Increment_Day,
    .Increment_Hour = Test_Clock__Setting__Increment_Hour,
    .Increment_Minute = Test_Clock__Setting__Increment_Minute,
    .Increment_Second = Test_Clock__Setting__Increment_Second,
    .Decrement_Day = Test_Clock__Setting__Decrement_Day,
    .Decrement_Hour = Test_Clock__Setting__Decrement_Hour,
    .Decrement_Minute = Test_Clock__Setting__Decrement_Minute,
    .Decrement_Second = Test_Clock__Setting__Decrement_Second
};