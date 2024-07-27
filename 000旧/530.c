#include <stdio.h>
int sifting(int n)
{
	int nums[500];
	int prime[500] = {0};
	int i,j,k=0;
	if(n>500)
	return -1;
	for(i=1;i<n;i++)
	{
		nums[i] = i+1;
	}

	for(i=1;i<n;i++)
	{
	if(nums[i]!=0)
	{
		prime[k] = nums[i];
	for(j=k;j<n;j++)
	{
		if(nums[j]%prime[k]==0)
		{
			nums[j]=0;
		}
	}
	k++;
	}
	}
	for(i=0;prime[i]!=0;i++);
	return i;
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sifting(n));
}

