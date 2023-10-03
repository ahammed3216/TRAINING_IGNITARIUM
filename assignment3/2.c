#include<stdio.h>
typedef char int8_t;
int main()
{

	int8_t string[20],count=0,i=0;
	int8_t *ptr_string=string;
	printf("Enter the string :");
	scanf("%s",ptr_string);

	for(i=0;ptr_string[i] != '\0';i++)
	{
		
		count=count+1;
	}

	printf("\n reversed string is :");
	for(i=count-1;i>=0;i--)
	{
		printf("%c",ptr_string[i]);
	
	}
	


}
