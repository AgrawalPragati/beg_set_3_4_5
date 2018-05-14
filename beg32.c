#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]; int i=0,c=0;
	gets(a);
    while(a[i]!='\0')
    {
    	if(a[i]==' ')
		{
    	c++;
		}
		i++;
	}
	printf("%d",c+1);
	return 0;
}
