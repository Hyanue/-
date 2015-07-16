#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
float getsum(float a,float b,float c) 
{
	return -1*(b/a);
}
float getji(float a,float b,float c) 
{
	return c/a;
}
int main() 
{
	float a;
	float b;
	float c; 
	printf("type in 'a' and press enter");
	scanf("%f",&a); 
	printf("type in 'b' and press enter");
	scanf("%f",&b); 
	printf("type in 'c' and press enter");
	scanf("%f",&c);
	float  d=b*b-4*a*c; 
		if(d >= 0) 
			{
				printf("\nhave solutions");  
				float f=sqrt(d); 
				float x1=(-1*b+f)/(2*a); 
				float x2=(-1*b-f)/(2*a);
				printf("\nx1=%f\nx2=%f",x1,x2);
				printf("\nx1+x2=%f\nx1*x2=%f",getsum(a,b,c),getji(a,b,c)); 
			}
		else
			{
				printf("\nno solution"); 
			}
	printf("\npress enter to end the program");
	getch(); 
	return 0;
	
}

