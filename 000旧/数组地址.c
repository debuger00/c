#include<stdio.h>
int main()
{
	int a[10];
	int i;
	int *address=a;
	for(i=0;i<=9;i++)
	scanf("%d",address++);
	for(i=0;i<=9;i++)
	printf("%d",a[i]);
	return 0;
}
