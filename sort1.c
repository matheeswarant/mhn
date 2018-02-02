#include<stdio.h>
int main()
{
int a[50]={1,4,3,2},n,i;
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
printf("the sor num is",a[i]);
return 0;
}
