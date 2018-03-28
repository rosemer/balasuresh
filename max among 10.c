#include <stdio.h>
  void main() {
    int a2[10];
    int i;
    int greatest;
    for (i = 0; i < 10; i++) 
    {
    	scanf("%d", &a1[i]);
    }
    greatest = a2[0];
    for (i = 0; i < 10; i++) 
    {
	if (a1[i] > greatest) 
	{
	greatest = a1[i];
    }
    }
    printf("%d", greatest);
    getch();
  }
