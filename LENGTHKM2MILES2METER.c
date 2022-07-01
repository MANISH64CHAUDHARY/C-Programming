#include<stdio.h>
int main()
{
    double kilo_meter,meter,miles;

    printf("Enter Kilo Meter:");
    scanf("%lf",&kilo_meter);

    miles=kilo_meter/1.609;
    meter=kilo_meter*1000;

    printf("Kilo Meter to Miles: %0.2lf",miles);
    printf("\nKilo Meter to Meter: %0.2lf",meter);
}
