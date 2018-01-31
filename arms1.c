#include<stdio.h>
int main()
{
int a=1,b=5,c=3,result=0,n=153;
result=a*a*a+b*b*b+c*c*c;
if(result==n)
{
printf("is armstrong");
}
else
{
printf("is not armstrong");
}
return 0;
}
