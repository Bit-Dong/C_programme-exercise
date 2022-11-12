#include<stdio.h>
int main()
{
    int i,s=0;
	for(i=1;i<=8000;i++)
	{
	   if(i%5==0&&i%2==0)
	   s=s+i;
	   printf("i=%d,s=%d\n",i,s);
	   if(s<=750)
	   {
	   	printf("s=%d\n",s);
	   }
	   	else
	   	break;
	   	
    } 	
    
    printf("s=%d\n",s);
}
