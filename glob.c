#include<stdio.h>
typedef unsigned int uint8_t;
uint8_t varx=10;
uint8_t *ptr1=&varx;
int main()
{
	
	uint8_t varx=50;
	printf("global variable is %d",*ptr1);
	printf("\nswaping the values :");
	*ptr1=*ptr1+varx;
	varx=*ptr1-varx;
	*ptr1=*ptr1-varx;

	printf("\nThe global value now is :%d",*ptr1);

	return 0;


}

