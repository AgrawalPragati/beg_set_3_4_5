#include<stdio.h>
void main()
{
	int n,i,sum=0,avr;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	avr=sum/n;
	printf("%d",avr);
}
