/*program to find sum of any two numbers*/......................>/*Comments*/
#include<stdio.h>...............................................>Header files
#include <conio.h>..............................................>Header files
    int sum(int, int)...........................................>Function header
    int s;......................................................>Global Declaration
    void main().................................................>main()
    {
        int a, b;..............>Declaration part
                  printf("Enter any two numbers:");.........>Executable part
                         scanf("%d%d", &a, &b);...........>Executable part
                         s = sum(a, b);..................>Executable part
                        printf("sum=%d", s);...........>Executable part
              getch();..........>Executable part
    }
    int sum(int x,int y)............>User defined function
    {
        int Z;
        Z = x + y;
        return (Z);
    }
