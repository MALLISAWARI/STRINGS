#include<stdio.h>
void main()
{
    	char s1[100];
    	char s2[100];
    	scanf("%[^\n]s",s1);
    	scanf(" %[^\n]s",s2);//we should mention some space here...
	    int i,j=0,len=0;
	    for(i=0;s1[i]!='\0';i++)
	    {
	    	len=len+1;
		}
		for(i=0;s2[i]!='\0';i++)
		{
			s1[len]=s2[i];
			len=len+1;	
		}
		printf("%s",s1);		 
}
