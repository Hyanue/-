#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() 
{
	float a;
	float b;
	float c;
	printf("type in 'a' and press enter\n");
	scanf("%f",&a);
	printf("type in 'b' and press enter\n");
	scanf("%f",&b);
	printf("type in 'c' and press enter\n");
	scanf("%f",&c);
	float  d=b*b-4*a*c;
		if(d >= 0)
			{
				printf("\nhave solutions");
				float f=sqrt(d);
				float jie_=(-1*b+f)/(2*a);
				float jie__=(-1*b-f)/(2*a);
				printf("\nx1=%f\nx2=%f",jie_,jie__);
			}
		else
			{
				printf("\nno solution");
			}
	printf("\npress enter to end the program");
	getch();
	return 0;
	
}

