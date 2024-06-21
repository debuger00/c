#include<stdlib.h>
#include<stdio.h>
#include<time.h>
typedef int Tenint[10];
Tenint a;
void randinput()
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++){
  	a[i]=rand()%(999-100+1)+100;
    }
}
int main()
{	
	int i;
	randinput();
	int max=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max)
		max=a[i];
	}
	printf("%d\n",max);
	for(i=0;i<9;i++)
	printf("%d ",a[i]);
	printf("%d",a[9]);
	return 0;
}
