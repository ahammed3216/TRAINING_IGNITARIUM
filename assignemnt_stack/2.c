#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int8_t count;
int8_t flag;

int8_t push();
int8_t pop();

int8_t res[10];
int8_t arr[20];
#define TRUE 1
#define FALSE 0
int main()
{

	printf("Enter the character od the string :");
	scanf("%hhd",&count);
	flag=count-1;
	push();
	
	pop();


}

int8_t push()
{


		printf("Enter the string :");

		while(flag!=-1)
		{
		
			scanf(" %c",&arr[flag]);
			flag--;
		
		
		}
		if(flag==-1)
		{
		
			printf("the stack is empty ");
			flag++;
		
		}
		





return 0;
}


int8_t pop()
{



	int8_t i=0,j=0,check,temp=0;
	while(flag != count)
	{
		
		temp=arr[flag];
		printf("t:%c",temp);
		for(i=0;res[i] !=temp;i++)
			check=TRUE;
	
		if(check==TRUE)
		{
			res[j]=temp;
			check=FALSE;
			j++;
		}
		
		flag++;



	
	
	}
	res[j]='\0';
	printf("\nThe resulted string is %s",res);










}
