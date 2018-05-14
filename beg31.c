#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; int i=0,count=0,l;
	gets(str);
    while(str[i]!='\0')
    {
    	if(str[i]==' ')
		{
    	count++;
		}
		i++;
	}
	l=strlen(str)-count;
	printf("%d",l);
	return 0;
}
