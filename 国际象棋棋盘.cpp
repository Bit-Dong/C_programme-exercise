//姓名：聂冬    学号：2006702-02 
//程序问题：国际象棋棋盘
 
#include<stdio.h> 

int main()

{

   int i,j;

   for(i=0;i<8;i++)

   {

     for(j=0;j<8;j++)

        if((i+j)%2==0)

        printf("%c%c", '\xA1', '\xF6');

        else

        printf("  ");


        printf("\n");

   }

}

