#include<stdio.h>
typedef unsigned char uint8_t;
int main()
{

	uint8_t var=0,target;
	printf("Enter the number to break with in 100 :\n");
	scanf("%hhd",&target);
	
	if (target<100)
	{
		for(var=1;var<=100;var++)
		{
			if (var == target)
			{
				printf("%d",var);
				var=var+100;
			}
			else
			{
				printf("%d",var);
				printf("\n");
			}

		
		}
	}
	else
	{
	
		printf("value is greater than 100");
	
	
	}
	


}
