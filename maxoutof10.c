#include<stdio.h>
void main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++)
	{
	if(max<a[i])
	{
		max=a[i];
	}

	}
printf("%d",max);
	
}
