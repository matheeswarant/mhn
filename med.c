#include<stdio.h>
int main()
{
int b[50]={1,4,3,2},n,i;
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
printf("the sor num is",b[i]\2);
return 0;
}
