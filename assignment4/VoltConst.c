#include<stdio.h>
void check();
int main()
{


	const int p=10;
	volatile int q=20;
	printf("The value of p first :%d",p);
	//p=60; cannot assign value
	printf("\nThe value of q in second :%d",q);
	q=30;
	printf("\nThe value of q in second :%d",q);
	

}
