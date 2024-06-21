#include<stdio.h>
int shifting(int n)
{
	int i,j,num=0,a[1000];
	for(i=2;i<=n;i++)a[i]=1;
	for(i=2;i<=n;i++)
		if(a[i]==1)
		 for(j=2;i*j<=n;j++)
		 	a[i*j]=0;
	for(i=2;i<=n;i++)
		if(a[i]==1)
		num++;
	return num;	
} 
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",shifting(n)) ;
	return 0;
}
