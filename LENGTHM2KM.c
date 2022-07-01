#include <stdio.h>


int main(void)
{

	unsigned int m;

	float km;

	printf("Enter Meters:");
	scanf("%d",&m);

	km=m/1000.00;

	printf("Kilometers: %.1f",km);

	return 0;

}
