#include <stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
char a[10];
for(i=0;i<a;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<a;i++)
{
	printf("%d %d\n",a[i],i);
}
return(0);
}
