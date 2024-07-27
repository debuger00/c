#include<stdio.h>
#define N 10
int isexist(int a[],int n,int x)
{
	int left=0,right=n-1,middle;
	while(left<=right){
		middle=(left+right)/2;
		if(x==a[middle])return 1;
		else if(x<a[middle])
		right=middle-1;
		else
		left=middle+1;	
	}
	return 0;
} 
int main()
{
	int s[N],x,i;
	printf("Enter the array:\n");
	for(i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	printf("The element is:\n");
	scanf("%d",&x);
	if(isexist(s,10,x))
	printf("%d exists in the array.",x);
	else printf("%d is not in the array.",x);
	return 0;
}
