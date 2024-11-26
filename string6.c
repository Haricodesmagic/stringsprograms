#include<stdio.h>
int main()
{
    int i;
    char s[45],k;
    k=0;
    printf("Enter the string\n");
    gets(s);
    printf("Enter the character\n");
    scanf("%c",&k);
    for(i=0;s[i]!='\0';i++)
        if(s[i]==k)
        {
        	printf("The first occurence of character is at position %d",i+1);
            k++;
        	break;
		}
		if(k==0)
		printf("This character is not present in the given string");
    return 0;
}
