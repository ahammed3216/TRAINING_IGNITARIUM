#include<stdio.h>
typedef char int8_t;
int main()
{


	int8_t x=50,y=60,z=70,q=80;
	int8_t const* ptr=&x;
	int8_t * const ptr1=&z;//pointer is a constant
	int8_t const * const ptr2=&q;
	printf("%hhd",*ptr);
	//*ptr=60; invalid condition
	ptr=&y;
	//ptr1=&x;invalid condition
	*ptr1=10;

	//ptr2=&x; invalid condition
	//*ptr2=120; invalid condition
	printf("\n%hhd",*ptr1);

	
	
	



}
