#include<stdio.h>
int main()
{
	int a[5]={5,4,3,2,1},n=5;
	int i,j,p,t;
	for(i=0;i<n-1;i++){
		p=i;
		for(j=i+1;j<n;j++)
		if(a[j]<a[p])p=j;
		t=a[i];
		a[i]=a[p];
		a[p]=t;
	}
	for(i=0;i<=4;i++)
	printf("%d",a[i]);	
	return 0;
}
