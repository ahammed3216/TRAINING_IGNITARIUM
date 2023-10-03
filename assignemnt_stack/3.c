#include<stdio.h>
#include<stdlib.h>
int8_t flag;
int8_t count;
int8_t push();
int8_t pop();
int8_t stack_arr[10];
int8_t stack_flag;
int8_t arr[10];
int main()
{


	printf("Enter the number of data to be stored :");
	scanf("%hhd",&count);
	flag=count-1;
	push();
	pop();







}

int8_t push()
{

	printf("\nENter the data to the array :");
	while(flag != -1)
	{
	
		scanf("%hhd",&arr[flag]);
		flag--;

	
	
	}
	if(flag==-1)
	{
		printf("\nQue is overflowed");
		flag=count-1;
	}
		
	





}

int8_t pop()
{

	printf("\nQue output !!!!");
	int8_t i=0;

	while(flag != -1)
	{
		
		printf("\t %hhd",arr[flag]);
		stack_arr[i]=arr[flag];
		flag--;
		i++;
	
	
	}
	//printf("The value of the i in last%hhd ",i);
	i--;
	printf("\nValues from the stack is ");
	while(i !=-1)
	{
		printf("%hhd\t",stack_arr[i]);
		i--;
	
	}
	









}
