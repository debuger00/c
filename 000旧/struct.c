#include "stdio.h"
void main()
{
	typedef struct {
		char name[10];
		char sex; 
		int grade[2];
	}Student;
	struct Student a={"Tom",'m',{20£¬03}};
	printf("%c %c %d %d %d"£¬&a.name,&a.sex,&a.grade[0],&a.grade[1]); 
	getchar();
} 
