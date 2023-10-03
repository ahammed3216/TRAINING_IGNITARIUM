#include<stdio.h>
typedef char int8_t;
int8_t y=20;
void update(int8_t **a);
int main()
{

	int8_t x=10,*ptr1;
	ptr1=&x;

	printf("The first value %hhd\n",x);
	printf("%x\n adress of the ptr1 is",&ptr1);
	update(&ptr1);
	printf("\nvalue after the update is %d",*ptr1);



}

void update(int8_t **a)
{
	//printf("\nAdress of the a is %x\n",a);
	//*a=30;
	*a=&y;
	printf("\nadress of y is %x",&y);
	printf("\n%xd",*a);


}
