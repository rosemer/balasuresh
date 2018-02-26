#include <stdio.h>
#include<string.h>
void main()
{
char a[1000];
int i,l=0,n=0;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>='0' && a[i]<='9')
n++;
}
printf("%d",n);
getch();
}
