#include<stdio.h>
#include<stdlib.h>
int8_t arr[10];
int8_t push();
int8_t pop();
int8_t display();
int8_t count;
int8_t flag=-2;
int main()
{


	int8_t option='Z';
        printf("how many data to be stored ");
        scanf("%hhd",&count);

        flag=count;
	while (option !='Q')
	{
		printf("\n\n\nEnter A to Push the data\nEnter B to pop the data\nEnter C to display the stack\nENter Q to quit");
		scanf(" %c",&option);
		if(option =='A')
		{
			push();
		}
		else if (option =='B')
		{
			pop();
		}
		else if(option =='C')
		{
		
			display();
		
		}
		else if (option =='Q')
		{
		
			printf("Quitting!!!");
		}
		else if(option =='D')
		{
		
			
		
			
		
		
		
		
		}
		else
		{
			printf("Invalid option");
		
		}
	}







}


int8_t push()
{


	int8_t i=0,n;

	//printf("how many data to be stored ");
	//scanf("%hhd",count);

	
	
	if(flag==-1)
	{
	
		printf("\nThe limit to enter the data is reached !!!!");
	
	}
	else if(flag==(count))
	{
		flag--;
		
		printf("\nEnter the data into the stack :");
		scanf(" %c",&arr[flag]);
		printf("\nvalue is added to the stack sucessfully ");
		flag--;
		printf("flag:%hhd",flag);
	
	
	}
	else
	{

		printf("\nEnter the data to stack ");
		scanf("%c",&arr[flag]);
		flag--;

		printf("\npushing the data into the stack is completed !!!!");
		 printf("flag:%hhd",flag);

	}

}


int8_t pop()
{


	int8_t i=0;
	if (flag==-2)
	{
	
		printf("There is no value in the stack >>>PLease fill the stack with values first");
		push();
	
	}
	else
	{
	
		
		if(flag==(count) || flag==(count-1))
		{
			printf("\nThe stack is overflowed "); 
			 printf("flag:%hhd",flag);

		
		
		}

		else if(flag==-1)
                {

                        flag=0;
                        printf("\nThe values is poped out is %c",arr[flag]);
                        
                         printf("flag:%hhd",flag);




                }

		else
		{
			flag++;
			printf("\nThe value is poped from the stack is %c",arr[flag]);
			
			 printf("flag:%hhd",flag);

		
		
		}

		
	
	
	}





}

int8_t display()
{

	int8_t i=0;
	if (flag==-1)
	{
		for(i=0;i<count;i++)
			printf("%c\t",arr[i]);
	
	
	}
	else if(flag==count-1)
	{
		printf("the stack is empty");
	
	
	}
	else
	{
		for(i=(flag+1);i<count;i++)
			printf("%c\t",arr[i]);
	}

}


