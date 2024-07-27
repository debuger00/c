#include<stdio.h>
int main()
{
	int a[5]={5,4,3,2,1},n=5;
	int i,j,t;
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		} 
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
