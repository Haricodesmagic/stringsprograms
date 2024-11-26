//dictionary order of the string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char a[40],temp;
	printf("Enter string\n");
    fgets(a,100,stdin);
    n=strlen(a);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;	
	}
	printf("%s",a);
	return 0;
}
