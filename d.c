#include<stdio.h>
int main()
{
int n=3,c=0;
while(n!=0)
{
n=n/10;
++c;
}
  printf("no of digits:%d",c);
return 0;
}
