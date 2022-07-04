/*program to find area of circle*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
    float r,area;
    printf("Enter radius of circle");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\nArea of circle=%f",area);
    getch();
}
