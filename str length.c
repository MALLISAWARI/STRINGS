#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%s",str);
	int len = 0, i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("Length is %d:",len);
}
