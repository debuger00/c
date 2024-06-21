#include<stdio.h>
void f(int *x,int *y)
{
	*x=*x+*y;
	y++;
}
int main()
{
	int a=1,b=2;
	f(&a,&b);
	printf("%d %d",a,b);
	return 0;
}

