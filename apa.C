#include <stdio.h>
#include <conio.h>
int main()
{
int a, diff, terms, value, sum=0, i;
printf("\n Enter the number of terms in AP series");
scanf("%d", &terms);
printf("\n Enter a term and common difference of AP series");
scanf("%d %d", &a, &diff);
value = a;
printf("\n AP SERIES");
for(i = 0; i < terms; i++)
{
printf("%d ", value);
sum += value;
value = value + diff;
}
printf("\n Sum of the AP series till %d terms is %d\n", terms, sum);
return 0;
}
