#include<stdio.h>
#include<string.h>
int main()
{
       char array[100];
       void fun(char array[100]);
       gets(array);
       fun(array);//这里改改
		return 0; 
}
void fun(char array[100])
{
       int sum=0,i;
       for(i=0;i<strlen(array);i++)
       {
           if('0'<array[i]&&array[i]<'9')
               sum=sum*16+array[i]-'0';
           if('a'<array[i]&&array[i]<'z')
               sum=sum*16+array[i]-'a'+10;
           if('A'<array[i]&&array[i]<'Z')
               sum=sum*16+array[i]-'A'+10;
       }
       printf("%d",sum);
}
