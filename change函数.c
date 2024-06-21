#include<stdio.h>
void change(double *a,double *b,double *c)
{
	if(*a>*b&&*a>*c)
	*a=*a+((*b=*b/2.0)+(*c=*c/2.0));
	else if(*b>*a&&*b>*c)
	*b=*b+((*a=*a/2.0)+(*c=*c/2.0));
	else
	*c=*c+((*a=*a/2.0)+(*b=*b/2.0));
} 
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	change(&a,&b,&c);
	printf("%.1f %.1f %.1f",a,b,c);
	return 0;
}
