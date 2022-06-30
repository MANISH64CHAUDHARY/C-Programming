/*program to find sum of any two numbers*/
#include<stdio.h>............>Header files
#include <conio.h>...........>Header files
    int sum(int, int)
    int s;
    void main()
    {
        int a, b;
                  printf("Enter any two numbers:");
                         scanf("%d%d", &a, &b);
                         s = sum(a, b);
                        printf("sum=%d", s);
              getch();
    }
    int sum(int x,int y)
    {
        int Z;
        Z = x + y;
        return (Z);
    }
