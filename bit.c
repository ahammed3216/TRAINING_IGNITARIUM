#include<stdio.h>
typedef unsigned char int8_t;
int main()
{

	int8_t x=5,y=0,r=0,size=0;
	printf("Enter the number :");
	scanf("%hhu",&x);
	printf("\nEnter the step size :");
	scanf("%hhu",&size);
	y=1<<size;
	r=x&y;
	if(r>>size ==1)
	{
	
		printf("one");
	}


	else
	{
		printf("Zero");
	
	}




}
