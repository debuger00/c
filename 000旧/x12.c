#include<stdio.h>
#include<malloc.h>
int *r;
int n;
int p=0;
void next ()
{
	if(p>=n-1) p=0;
	else p++;
}
void start(int s)
{
	int i;
	for(i=1;i<s;i++) next();
}
void count (int m)
{
	int i;
	for(i=0;i<m;)
	{
		if(r[p]!=0) i++;
		if(i<m) next(); 
	}
} 
void out()
{
	printf("%d\n",r[p]);
	r[p]=0;
}
void main()
{
	int s,m,i;
	printf("The total of children:");
	scanf("%d",&n);
	r=calloc(sizeof(int),n);
	for(i=0;i<n;i++) r[i]=i+1;
	printf("Which is the first:");
	scanf("%d",&s);
	printf("How many children to leap:");
	scanf("%d",&m);
	start(s);
	for(i=1;i<=n;i++)
	{
		count (m);
		out();
	}
	free(r);
}

