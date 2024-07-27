#include <stdio.h>
int main() 
{
  struct 
  {
    char *name;  //姓名
    int age;  //年龄
    char group;  //所在小组
  } stu1;
  //给结构体成员赋值
  stu1.name = "Tom";
  stu1.age = 18;
  stu1.group = 'A';
  //读取结构体成员的值
  printf("%s的年龄是%d，在%c组\n", stu1.name, stu1.age, stu1.group);
  return 0;
}
