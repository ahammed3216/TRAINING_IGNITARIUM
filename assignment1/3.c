# include<stdio.h>
typedef int int32_t;
int main()
{

	int32_t num1,num2;
	printf("Enter the 2 numbers :");
	scanf("%d%d",&num1,&num2);

	if (num1==num2)
	{
		printf("Both the numbers are equal");
	
	}

	else if (num1>num2)
	{
	
		printf("first number is greater than the second number ");
	}

	else if (num2>num1)
	{
		printf("second number is greater the first number ");
	
	
	}

	else
	{
	
		printf("wrong inputs is given ");
	}
	
	

}
