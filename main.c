#include<stdio.h>
#include "app.h"
int main()
{

	int32_t var1,var2;
	int32_t *ptr1,*ptr2;
	ptr1=&var1;
	ptr2=&var2;
	printf("value1 %x",ptr1);
	printf("\nvalue2 %x",ptr2);
	char operation;

	printf("Enter A for addition\n"
		"Enter S for Substraction\n"
		"Enter D for division\n"
		"Enter M for multiplication\n"
		"Enter Q for Quit\n");

	scanf("%c",&operation);
	while(operation != 'Q')
	{
		printf("\nenter 2 numbers :");
		scanf("%f%f",&var1,&var2);
	
		switch(operation)
		{
	
			case 'A':
				 rs_ptr=add(ptr1,ptr2);
				 printf("The sum of the number is :");
				 printf("%f",*rs_ptr);
				
			 break;

			case 'S':printf("Substarction od the numbers is %f\n",SUB(*ptr1,*ptr2));
			 break;

			case 'M':printf("Multiplication of the numbers is %f\n",MUL(*ptr1 , *ptr2));
			 break;

			case 'D':printf("Division of the numbers is %f\n",DIV(*ptr1, (*ptr2)));
			 break;

			default:printf("Incorrect option is selected !!!\n");
	
		}
		printf("\n\nEnter A for addition\nEnter S for Substraction\nEnter D for division\nEnter M for multiplication\nEnter Q for Quit\n");
		scanf(" %c",&operation);
	


	}
}

