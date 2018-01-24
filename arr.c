#include<stdio.h>
int main()
{
int k=5,m=5,s=0,f[10],i;
for(i=0;i<k;i++)
{
scanf("%d",&f[i]);
if(i<m)
{
s=s+f[i];
i++;
}
printf("%d\t",s);
}
return 0;
}
