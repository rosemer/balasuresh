#include <stdio.h>
int main()
{
	int a,rem,rev=0;

	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=(rev*10)+rem;
		a=a/10;
	}
	a=rev;
	while(a!=0)
	{
		rem=a%10;
		printf("%d ",rem);
		a=a/10;
	}
	return(0);

}
