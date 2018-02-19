#include<stdio.h>
#include<string.h>
int main()
{
int c;
char s[100];
printf("\n enter the sentense");
scanf("%s",&c);
for(i=0;i<=strlen(s);i++)
{
if((s[i]>='a'&&s[i]=<'z')||(s[i]>='A'&&s[i]=<'Z'))
{
c++;
}
return(0);
}
}
	
