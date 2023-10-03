#include<stdio.h>
typedef float int32_t;
int32_t *add(int32_t *a,int32_t *b);
int32_t sub(int32_t a,int32_t b);
int32_t div(int32_t a,int32_t b);
int32_t mul(int32_t a,int32_t b);
int32_t result;
int32_t *rs_ptr;
int32_t (*fn_ptr)(int32_t,int32_t);
int32_t *(*fn_ptr1)(int *a,int *b);
void UpdatePtr(int32_t a,int32_t **b);
int main()
{

	int32_t var1,var2;
	int32_t *ptr1,*ptr2,*ptr3;
	int32_t *(*fn_ptr2)(int32_t *a,int32_t *b);
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


		UpdatePtr(operation,&fn_ptr2);

		printf("\nenter 2 numbers :");
		scanf("%f%f",&var1,&var2);
	
		switch(operation)
		{
	
			case 'A':
				 rs_ptr=fn_ptr2(ptr1,ptr2);
				 //rs_ptr=fn_ptr1(ptr1,ptr2);
				 printf("The sum of the number is :");
				 printf("%f",*rs_ptr);
				
			 break;

			case 'S':printf("Substarction od the numbers is %f\n",fn_ptr(*ptr1,*ptr2));
			 break;

			case 'M':printf("Multiplication of the numbers is %f\n",fn_ptr(*ptr1 , *ptr2));
			 break;

			case 'D':printf("Division of the numbers is %f\n",fn_ptr(*ptr1, (*ptr2)));
			 break;

			default:printf("Incorrect option is selected !!!\n");
	
		}
		printf("\n\nEnter A for addition\nEnter S for Substraction\nEnter D for division\nEnter M for multiplication\nEnter Q for Quit\n");
		scanf(" %c",&operation);
	


	}
}

void UpdatePtr(int32_t a, int32_t **ptr)

{



	if(a=='A')
	{
		fn_ptr1=&(add);
		*ptr=&add;
		printf("sucess");
	}
	else if(a=='S')
		fn_ptr=&(sub);
	else if(a=='M')
		fn_ptr=&(mul);
	else
		fn_ptr=&(div);


}


int32_t *add(int32_t *a ,int32_t *b)
{

	printf("\n IN add block ");
	printf("\n%f\t%f",*a,*b);
	result=*a + *b;
	printf("\n%f",result);
	return (&result);

}


int32_t sub(int32_t a ,int32_t b)
{
	
	int32_t result=a-b;
	return result;
	
}

int32_t mul(int32_t a ,int32_t b)
{

        int32_t result=a*b;
        return result;

}
int32_t div(int32_t a ,int32_t b)
{

        int32_t result=a/b;
        return result;

}

