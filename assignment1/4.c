#include<stdio.h>
typedef char int8_t;
int main()
{


	int8_t input;
	int val;
	printf("Enter the key :");
	scanf("%c",&input);
	val=input;
	
	
	if (val >= 65 && input <= 92 || val >= 97 && input <= 124)
	{
		printf("This is a character ");
	
	
	}
	else if (val >= 48 && input <= 57)
	{
		printf("This is a number ");
	
	}
	else
	{
	
		printf("this is a special character ");
	
	}

}
