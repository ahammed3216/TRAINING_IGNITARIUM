#include<stdio.h>
typedef char int8_t;
int main()
{


	int8_t string[15],x,i=0,flag=-1,count=0;
	int8_t *ptr_string=string,*ptr=&x;
	
	printf("Enter the string \n");
	scanf("%s",ptr_string);
	printf("Enter the character to be find :\n");
	scanf(" %c",ptr);

	for(i=0;ptr_string[i] != '\0';i++)
	{
	
		if (ptr_string[i] == *ptr)
		{
			count=count+1;
		
		}

	
	}

	if(count>0)
	{
	
		printf("The number of times the character is repeated is %d",count);

	
	}
	else
	{
	
		printf("\nThe letter is not defined in this string");
	}
	



}
