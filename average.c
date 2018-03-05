#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b,i,sm=0,avg;
    printf("Enter the number");
    scanf("%d",&b);
    printf("Enter the array numbers");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        sm+=a[i];
    }
    avg=sm/n;
    printf("The average is %d",avg);
}
