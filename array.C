#include<stdio.h>
int main()
{
int a[30],i,n,s; 
printf("\nEnter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
s=a[0];
for(i=0;i<n;i++)
{
if(s<a[i])
{
s=a[i];
}
}
printf("\nLargest Element",s);
return(0);
}
