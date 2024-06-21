#include<stdio.h>
int main()
{
	double v[4],vh,kh;
	int i;
	for(i=0;i<4;i++)
	scanf("%d",&v[i]);
	vh=(v[0]+v[1]+v[2]+v[3])/4;
	kh=vh/(0.75*3.50895e-3);
	printf("%f\t%f",vh,kh);
	return 0;
} 
