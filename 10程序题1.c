#include<stdio.h>
int main()
{	
	int i;
	double a[10],sum=0,average;
	for(i=0;i<10;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	average=sum/10;
	for(i=0;i<10;i++){
		printf("%.1f ",a[i]-average);
	}
	return 0;
} 
