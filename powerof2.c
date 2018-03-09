#include<stdio.h>
#include<conio.h> 
int main()
{
    int n;
    int tempNum,flag;
     
    printf("\nEnter an integer number: ");
    scanf("%d",&n);
     
    tempN=num;
    flag=0;
   
    while(tempN!=1)
    {
        if(tempN%2!=0){
            flag=1;
            break;
        }
        tempN=tempN/2;
    }
  
    if(flag==0)
        printf("\n%d is a number that is the power of 2.",num);
    else
        printf("\n%d is not the power of 2.",num);
      
    return(0);
}
