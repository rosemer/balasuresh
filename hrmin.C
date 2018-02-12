#include <stdio.h>
int main(void)
{
int s,sm,e,em; 
int r1,r2,res,min,sec;
printf("enter the start time hours and minutes");
scanf("%d %d",&s,&sm);
printf("\nenter the end time hours and minutes");
scanf("%d %d",&e,&em);
if(s>e)
{
e=e+12;
}
r1=(s*60)+sm;
r2=(e*60)+em;
res=r2-r1;
min=res/60;
sec=res%60;
printf("\n%dhr:%dsec\n%dhr:%dsec",s,sm,e,em);
printf("\nthe difference is:\n%dhr:%dmin",min,sec);
return 0;
}
