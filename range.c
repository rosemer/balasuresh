#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if((n>1)&&(n<10))
{
printf("%d",n);
}
else
{
    printf("not in range");
}
getch();
}
