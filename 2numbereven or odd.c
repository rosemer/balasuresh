#include<stdio.h>
int main()
{
 int num1,num2,pro;
 printf("get the two numbers:");
 scanf("%d%d",&num1,&num2);
 pro=num1*num2;
 if(pro%2==0)
 {
   printf("this is even number=%d",pro);
   }
   return 0;
   }
