#include<stdio.h>
void main()
{
    int i,n;
    clrscr();
    printf("\n enter The Value of N=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        printf("\n 5 * %d = %d",i,5*i);
     }
     getch();
}
