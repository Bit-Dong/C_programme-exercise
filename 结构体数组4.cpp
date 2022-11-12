#include<stdio.h>
int main()
{
struct Date
{
	int year;
	int month;
	int day;
};
struct Person
{
	int num;
	char name[10];
    int age;
    struct Date bir;
    long long tel;
    char add[10];
}person[4];
int i;
for(i=0;i<4;i++)
  {
  printf("请输入第%d个人的信息():\n",i+1);
  scanf("%d %s %d %d %d %d %lld %s",&person[i].num,person[i].name,&person[i].age,&person[i].bir.year,&person[i].bir.month,&person[i].bir.day,&person[i].tel,&person[i].add);
  }
  for(i=0;i<4;i++)
  printf("%d,%s,%d,%d,%d,%d,%lld,%s\n",person[i].num,person[i].name,person[i].age,person[i].bir.year,person[i].bir.month,person[i].bir.day,person[i].tel,person[i].add);
 //{
  //printf("%d\n",person[i].num);
 // printf("%s\n",person[i].name);
   //printf("%d\n",person[i].age);
   //printf("%d\n",person[i].bir.year);
   //printf("%d\n",person[i].bir.month);
   //printf("%d\n",person[i].bir.day);
   //printf("%lld\n",person[i].tel);
   //printf("%s\n",person[i].add);
   //}                                                                                                                                                                                                                                                                                                                                                       
	return 0;
}
