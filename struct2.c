#include <stdio.h>
int main() 
{
  struct 
  {
    char *name;  //����
    int age;  //����
    char group;  //����С��
  } stu1;
  //���ṹ���Ա��ֵ
  stu1.name = "Tom";
  stu1.age = 18;
  stu1.group = 'A';
  //��ȡ�ṹ���Ա��ֵ
  printf("%s��������%d����%c��\n", stu1.name, stu1.age, stu1.group);
  return 0;
}
