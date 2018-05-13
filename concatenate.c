#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0;
	char s1[20],s2[10];
	scanf("%s%s",s1,s2);
	while(s1[i]!='\0')
	i++;
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;j++;
	}
	s1[i]='\0';
	printf("%s",s1);
}
