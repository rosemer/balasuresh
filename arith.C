#include<stdio.h>
void main()
{
  int a[50],n=0,i=0,app=0;
  clrscr();
  printf("\n Enter the n series=");
  scanf("%d",&n);
  printf("\n Enter the number=");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  app=(n*(a[1]+a[n]))/2;
  printf("\n The progession series=%d",apa);
  getch();
  }
