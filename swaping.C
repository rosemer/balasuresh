#include<stdio.h>
int main()
{
float a,b,temp;
printf("enter the value a:");
scanf("%f",&a);
printf("enter the value b:");
scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("\n after swapping,value of a=%.2f\n",a);
printf("\n after swapping,value of b=%.2f\n",b);
return 0;
}
