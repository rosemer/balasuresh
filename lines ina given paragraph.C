#include<stdio.h>
int main()
{
int a,n=0;
char s[100];
printf("\nEnter the sentense");
gets(s);
for(a=0;s[a]!=0;a++)
{
if(s[a]=='.')
n++;
}
printf("\nThe number of line in the paragraph is  %d",n);
}
