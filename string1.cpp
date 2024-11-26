#include<stdio.h>
int main()
{
    int i;
    char s[20];
    printf("Enter the string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("length of the string is %d",i);
    return 0;
}
