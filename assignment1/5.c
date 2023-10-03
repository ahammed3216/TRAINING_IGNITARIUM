#include <stdio.h>
typedef int int32_t;
int main()
{

	int32_t month,week;
	printf("Enter the month number :");
	scanf("%d",&month);
	printf("Enter the day number : ");
	scanf("%d",&week);

	switch(month)
	{
	
		case 1:
			printf("The month is january\n");
			break;
        
                case 2:
                        printf("The month is February\n");
                        break;
        
                case 3:
                        printf("The month is March\n");
                        break;
        
                case 4:
                        printf("The month is April\n");
                        break;
        
                case 5:
                        printf("The month is May\n");
                        break;
        
                case 6:
                        printf("The month is June\n");
                        break;
        
                case 7:
                        printf("The month is July\n");
                        break;
        
                case 8:
                        printf("The month is August\n");
                        break;
        
                case 9:
                        printf("The month is Septhember\n");
                        break;
        
                case 10:
                        printf("The month is October\n");
                        break;
        
                case 11:
                        printf("The month is November\n");
                        break;
                case 12:
                       printf("The month is December\n");
                       break;

		default:
		       printf("Invalid input is given \n");
        


	}


	if (week==1)
	{
	
		printf("Say is sunday");
	}
	else if (week==2)
	{
		printf("Day is monday");
	}


	else if (week==3)
        {
                printf("Day is Tuesday");
        }

	else if (week==4)
        {
                printf("Day is wednesday");
        }

	else if (week==5)
        {
                printf("Day is Thursday");
        }

	else if (week==6)
        {
                printf("Day is Friday");
        }

	else if (week==7)
        {
                printf("Day is saturday");
        }
	else
	{
	
		printf("Invalid input !!!!");
	}

        




}        
