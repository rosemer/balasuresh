#include <stdio.h>
int main()
{
	int minute,hour,m;
	printf("\n Enter minute:");
	scanf("%d",&minute);
	hour=minute/60;
	minute=minute%60;
	printf("\n %d %d",hour,minute);
	return 0;
  }
  
	
