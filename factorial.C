#include<stdio.h>
void main()
{
int a=1,b;
printf("Enter number");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
a=a*i;
}
printf("factorial is %d",&a);
getch();
}
