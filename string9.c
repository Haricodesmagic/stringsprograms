#include<stdio.h>
int main()
{
    int i;
    char str[50];
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    	printf("%c ",str[i]);
	}
	return 0;
}
