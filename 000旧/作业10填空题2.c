#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Range(m,n) (n-m+1)+m
void randomnum(int a[],int n)
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<n;i++){
		a[i]=rand()%Range((-100),100);
	}
} 
void main()
{
	int a[20];
	int i,posnum,negnum,zeronum;
	randomnum(&a[0],20);
	posnum=negnum=zeronum=0;
	 for(i=0;i<20;i++)
	 	if(a[i]>0)
	 	posnum+=1;
	 	else if(a[i]<0)
	 	negnum+=1;
	 	else zeronum+=1;
	 printf("posnum=%d\nnegnum=%d\nzeronum=%d\n",posnum,negnum,zeronum); 
}
