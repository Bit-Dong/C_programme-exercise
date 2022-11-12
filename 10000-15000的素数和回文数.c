//回文数：例如12321   a=e,b=d; 
#include <stdio.h>
int main()
{
	int huiwenshu();
	int sushu();
	huiwenshu();
	sushu();
}
int huiwenshu()
{
	int i,s=0,a,b,c,d,e;
	for (i=10000;i<=15000;i++)
	{
        a=i/10000;
 	    b=i/1000%10;
	    c=i/100%10;
	    d=i/10%10;
 	    e=i%10;
	    if (a==e&&b==d)
		{
			s++;
			printf("i=%d\t\t\ts=%d\n",i,s);
		}
	}
	printf("s=%d\n\n\n\n\n\n\n\n\n\n\n\n\n",s);
}
#include <math.h>
int sushu()
{
	int i,j,s=0;
	for (i=10000;i<=15000;i++)
	{
        int n=0;
		for (j=2;j<=sqrt(i);j++)
		{
			if (i%j==0)
				n=1;
		}
		if (n==0)
		{
			s++;
			printf("i=%d\ts=%d\n",i,s);
		}
	}
	printf("s=%d\n",s);
}
