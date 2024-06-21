#include<stdio.h>
#include<math.h>
#include<string.h>
int hextodec(char arr[])
{
    int i,j=0,sum=0,n=strlen(arr);
    int num[100];
    for(i=0;i<n;i++)
    {
        switch(arr[i])
    {   
        case 'A':num[j++]=10;break;
        case 'a':num[j++]=10;break;
        case 'B':num[j++]=11;break;
        case 'b':num[j++]=11;break;
        case 'C':num[j++]=12;break;
        case 'c':num[j++]=12;break;
        case 'D':num[j++]=13;break;
        case 'd':num[j++]=13;break;
        case 'E':num[j++]=14;break;
        case 'e':num[j++]=14;break;
        case 'F':num[j++]=15;break;
        case 'f':num[j++]=15;break;
        default:num[j++]=-1;break;
        }
    	}
    for(i=n-1;i>=0;i--)
    sum+=num[i]*pow(16.0,n-1-i);
    return sum;
}

int main()
{   
	int sum,i; 
	for(i=1;i<=2;i++){
    char arr[10];
    gets(arr);
    sum+=hextodec(arr);
	}
	printf("%d",sum);
    return 0;
}
