#include<stdio.h>
#include<stdlib.h>
int8_t arr[10];
int8_t count;
int8_t flag;
int8_t push();
int8_t pop();
int8_t *ptr;
int main()
{


	printf("Enter the no of characters :");
	scanf("%hhd",&count);
	flag=count-1;
	push();
	
	pop();	


	











}
int8_t push()
{


	while(flag != -1)
	{
	
		scanf(" %c",&arr[flag]);
		flag--;

	
	
	}
	if(flag ==-1)
	{
	
		printf("Stack is empty :");
		flag++;
	
	}


return 0;
}

int8_t pop()
{
	ptr=(int8_t *)calloc(10,sizeof(int8_t));
	int8_t i=0;
	while(flag!=count)

	{
	
		
		printf("\nthe data pop out from tje array id %c",arr[flag]);
		*(ptr+i)=arr[flag];
		flag++;
		i++;
	
	}
	if(flag==count)
		printf("\nthe stack is overflowed ");
	else
		printf("\nelse");

	printf("\nPrinting the reverse string is :%s",ptr);





}
