#include<stdio.h>
double f(float a, float b)
{
	return a+b;
} 
int main()
{
	float a=1,b=2;
	printf("%lf",f(a,b));
	return 0;
}
