#include<stdio.h>
#include "app.h"
int main()
{

	int8_t value=0,pos=0,pos1=0,option='Z';

	while(option !='Q')
	{
	printf("\n\nEnter A to set a bit of a number"
			"\nEnter B to Clear the bit of a number"
			"\nEnter c to swap the bits of a number "
			"\nEnter D to Toggle the bits"
			"\nEnter E to change the sign of the bumber"
			"\nEnter F to find the binary of a number"
			"\nEnter Q to quit");
	scanf(" \n%c",&option);
	if (FLAG ==1)
	{
		if(option =='A')
		{
		
			printf("Enter the value :");
			scanf("%hhd",&value);
			
			printf("\nEnter the position :");
			scanf("%hhd",&pos);
			if(VAL==1)
				printf("The value after seting the bit is %hhd",set_buffer(value,pos));
			else
				printf("%hhd",SET_BUFFER(value,pos));
		}

		else if(option=='B')
		{
			printf("Ente the number to set ");
			scanf("%hhd",&value);
			printf("\nEnter the position to clear the bit:");
			scanf("%hhd",&pos);
			
			if (VAL==1)
				printf("\nThe value after the clearing the bit is %hhd",clr_buffer(value,pos));
			else
				printf("The value after clearing the bit is %hhd",CLR_BUFFER(value,pos));
			
		
		}

		else if (option =='C')
		{
		
			printf("\nEnter the value :");
			scanf("%hhd",&value);
			printf("\nEnter the position1 :");
			scanf("%hhd",&pos);
			printf("\nEnter the position 2 :");
			scanf("%hhd",&pos1);
			
			printf("\nThe value after swaping the bit is %hhd",swap_buffer(value,pos,pos1));
				
			
		}
		else if(option =='D')
		{
		
			printf("\nEnter the value :");
			scanf("%hhd",&value);
			printf("enter the position :");
			scanf("%hhd",&pos);
			printf("\nThe value after the toggling is %hhd :",toggle_bit(value,pos));
		
		
		}
		else if(option =='E')
		{
		
			printf("\nENter the value :");
			scanf("%hhd",&value);
			if (VAL==1)
				printf("\nValue after the sign conversion%hhd",sign_conv(&value));
			else
				printf("\nthe value after the sign conversion is %hhd",SIGN_CONV(value));
			
		
		
		}
		else if(option =='F')
		{
		
			printf("\nEnter the value :");
			scanf("%hhd",&value);
			binary(value);
		
		
		}
		else if(option =='Q')
		{
		
			printf("Quiting");
			break;
		}
		else
		
			printf("Invalid option");
	}
		
	else
	{
	
	
	
		if(option =='A')
		{
	
			printf("Enter the value :");
			scanf("%hhd",&value);
			
			printf("\nEnter the position :");
			scanf("%hhd",&pos);
			if(VAL==1)
				printf("The value after seting the bit is %hhd",set_buffer1(&value,&pos));
			else
				printf("%hhd",SET_BUFFER(value,pos));
		}

		else if(option=='B')
		{
			printf("Ente the number to set ");
			scanf("%hhd",&value);
			printf("\nEnter the position to clear the bit:");
			scanf("%hhd",&pos);
			
			if (VAL==1)
				printf("\nThe value after the clearing the bit is %hhd",clr_buffer1(&value,&pos));
			else
				printf("The value after clearing the bit is %hhd",CLR_BUFFER(value,pos));
			
	
		}

	    	else if (option =='C')
		{
		
		printf("\nEnter the value :");
		scanf("%hhd",&value);
		printf("\nEnter the position1 :");
		scanf("%hhd",&pos);
		printf("\nEnter the position 2 :");
		scanf("%hhd",&pos1);
		
		printf("\nThe value after swaping the bit is %hhd",swap_buffer1(&value,&pos,&pos1));
			
		
		}
		else if(option =='D')
		{
		
			printf("\nEnter the value :");
			scanf("%hhd",&value);
			printf("enter the position :");
			scanf("%hhd",&pos);
			printf("\nThe value after the toggling is %hhd :",toggle_bit1(&value,&pos));
		
		
		}
		else if(option =='E')
		{
		
			printf("\nENter the value :");
			scanf("%hhd",&value);
			if (VAL==1)
				printf("\nValue after the sign conversion%hhd",sign_conv1(&value));
			else
				printf("\nthe value after the sign conversion is %hhd",SIGN_CONV(value));
			
		
		
		}
		else if(option =='F')
		{
		
			printf("\nEnter the value :");
			scanf("%hhd",&value);
			binary1(&value);
		
		
		}
		else if(option =='Q')
		{
		
			printf("Quiting");
			break;
		}
		else
		
			printf("Invalid option");

	
	
	
	
	
	
	
	
	}
	}

	return 0;

}














