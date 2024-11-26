//reverse without strrev

#include<stdio.h>
int main()
{
    int i,c=0;
    char s[20],ch;
    printf("Enter the string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    c++;
    for(i=0;i<c/2;i++)
    {
    ch=s[i];
    s[i]=s[c-i-1];
    s[c-i-1]=ch;
	}
	printf("The reversed string is %s",s);
    return 0;
}
