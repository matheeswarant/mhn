#include<stdio.h>
int main()
{
int a=3,b=7,c=4;
if((a>b)&&(a>c))
{
printf(" the largest value%d",a);
}
else if(b>c)
{
printf("the largest value %d",b);
}
else
{
printf("the largest value%d",c);
}
return 0;
}
