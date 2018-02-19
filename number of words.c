#include<stdio.h>
int main()
{
int a,n=0;
char s[100];
printf("\nEnter the sentense");
gets(s);
for(a=0;s[a]!='\0';a++)
{
if(s[a]==' ' || s[a]==' ' || s[a]== ' ')
n++;
}
printf("\nThe number of character in the sentences are %d",n+1);
}
