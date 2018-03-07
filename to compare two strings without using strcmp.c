#include<stdio.h>
#include<string.h>
int main(){
	char b[20];
	char a[20];
	int l,n,i;
	int sum1=0;
	int sum2=0;
	scanf("%s",b);
	scanf("%s",a);
	 l=strlen(b);
     n=strlen(a);
     for(i=0;i<l;i++){
     	sum1=sum1+b[i];
	 }
	  for(i=0;i<n;i++){
     	sum2=sum2+b[i];
	 }
	 if(sum1>sum2){
	 	printf("%s",b);
	 }
	 else{
	 	printf("%s",a);
	 }
