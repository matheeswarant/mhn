#include <stdio.h>

int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
{
printf("%c this i alphabet",c);
}
else
{
printf("%c this is not alphabet",c);
}


	return 0;
}
