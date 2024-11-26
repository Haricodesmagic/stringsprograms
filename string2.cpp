#include<stdio.h>
int main()
{
    int i;
    char s1[] = "Friendship", s2[20];
    
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i] = '\0';    
	printf("the string s2 is ");
    puts(s2);
    return 0;
}
