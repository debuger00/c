#include<stdio.h>
int main()
{
	int s[3][3],i,j,a[3]={0},b[3]={0},c=0,d=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i]+=s[i][j];
		}
	}
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			b[j]+=s[i][j];
		}
	}
	for(i=0,j=0;i<3;i++,j++){
		c+=s[i][j];
	} 
	for(i=0,j=2;i<3;i++,j--){
		d+=s[i][j];
	}
	int ret=1;
	if(c!=d)
	ret=0;
	else for(i=0;i<3;i++){
		if(a[i]!=c&&b[i]!=c){
			ret=0;
			break;
		}
	} 
	if(ret){
		printf("Yes");
	}
	else printf("No");
	return 0;
}
