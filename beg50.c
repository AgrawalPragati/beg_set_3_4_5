#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n%2==0 && n>1)
	n=n/2;
	if(n==1)
	printf("yes");
	else
	printf("no");
	
}
