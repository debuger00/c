#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[100][100],i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
a[i][j]=0;
}
}
for(i=0;i<n;i++)
a[i][0]=1;
for(i=0;i<n;i++){
for(j=1;j<i+1;j++){
a[i][j]=a[i-1][j]+a[i-1][j-1];
}
}  
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[i][j]!=0)
printf("%d ",a[i][j]);
else{
printf("\n");
break;
}
}
}
return 0;
} 
