#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() 
{
	float a;
	float b;
	float c;
	scanf("%f",&a);
	scanf("%f",&b);
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
	getch();
	return 0;
	
}

