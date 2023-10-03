#include<stdio.h>
typedef char int8_t;

int main()
{

	int8_t name[10],count=0;
	printf("How many characters you need:");
	scanf("%d",&count);
	printf("Enter your name :");
	for(int8_t i=0;i<count;i++)
	{
		
		scanf(" %c",&name[i]);
	
	}
	for (int8_t i=0;i<count;i++)
	{
	
		printf("%s",name[i]);
	}



}
