#include<stdio.h>
int main()
{
	long int x,n=0;
	scanf("%d",&x);
	while(x!=1){
		if(x%2==1)
			x=3*x+1;
		else
			x=x/2;
		n++;	
	}
	printf("%ld",n);
	return 0;
}
