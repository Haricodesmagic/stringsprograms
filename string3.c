#include<stdio.h>
int main()
{
	char str1[50], str2 [50];
	int i, j;
	printf("Enter the first string:- ");
	scanf("%s", str1);
	printf("\n Enter the second string :- ");
	scanf("%s", str2);
	for(i=0; str1[i] != '\0'; ++i);
	for (j=0; str2[j] != '\0'; ++j, ++i)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("\n Output : %s", str1);
	return 0;
}
