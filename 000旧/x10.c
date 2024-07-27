#include<stdio.h>
void move(int array[],int n,int m)
{
	int p,array_front;
	for(;m>0;m--){
		array_front=array[0];
		for(p=0;p<n-1;p++)
			array[p]=array[p+1];
			array[n-1]=array_front;
	}	
}
int main()
{
	int number[20],n,m,i;
	printf("thr total number is:");
	scanf("%d",&n);
	if(n>20)
	return;
	printf("back m:");
	scanf("%d",&m);if(m>n)
	return;
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	move(number,n,m);
	for(i=0;i<n;i++)
	printf("%5d",number[i]);
	return 0;
}
