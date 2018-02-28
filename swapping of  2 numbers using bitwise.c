#include<stdio.h>
int main()
{
int a,b;
printf("enter the value a:");
scanf("%d",&a);
printf("enter the value b:");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n%d%d swapping of two numbers",a,b);
return 0;
}
