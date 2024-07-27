#include<stdio.h>
int main()
{
	int a[5]={5,4,3,2,1},n=5;
	int i,j,t;
	for(i=1;i<=n-1;i++){
		t=a[i];
		for(j=i-1;j>=0;j--) 
		if(a[j]>t)a[j+1]=a[j];
		else break;
		a[j+1]=t;
	}
	for(i=0;i<=4;i++)
	printf ("%d",a[i]);
	return 0;
} 
