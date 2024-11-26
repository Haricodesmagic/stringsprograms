//INSERT a new character in a given string at a given position

#include<stdio.h>
int main()
{
    int i,p,c=0;
    char s[20],k;
    printf("Enter the string\n");
    gets(s);
    printf("Enter the character\n");
    scanf("%c",&k);
    printf("Enter the index at which character should be inserted\n");
    scanf("%d",&p);
    for(i=0;s[i]!='\0';i++)
    c++;
    //pushing all elements from p index onwards to the next block
    for(i=c-1;i>=p;i--)
    s[i+1]=s[i];
    
    //inserting at the pth position
    s[p]=k;
    printf("the new string is %s",s);
    return 0;
}
