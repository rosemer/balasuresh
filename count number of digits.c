#include<stdio.h>
void  main()
{
int n,count=0;
clrscr();
printf("\n enter elements");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
printf("\n number of digits %d",count);
}
getch();
}
