#include<stdio.h>
#include<stdlib.h>
int main()
{


	int8_t option ='Z',i=0,n1=0,n2=0,temp[10];
	int8_t *ptr1=NULL,*ptr2=NULL;


	while (option != 'Q')
	{
	
	
		scanf(" %c",&option);

		if (option =='A')
		{
		

			printf("How many characters need in your senetence ");
			scanf("%hhd",&n1);

			ptr1=(int8_t *)calloc(n1,sizeof(int8_t));

			printf("Enter your characters :");

			for(i=0;i<n1;i++)
			{
			
				scanf(" %c",(ptr1+i));
			
			}
			*(ptr1+i)='\0';

			printf("%s",ptr1);


			printf("\nEnter the no of charctes you want to search :");
			scanf(" %hhd",&n2);

			ptr2=(int8_t *)calloc(n2,sizeof(int8_t));

			printf("\nEnter the word :");
			scanf("%s",ptr2);


			printf("\nprinting the words ");
			for(i=0;i<n1;i++)
			{
			
				if(ptr1[i] != ' ')
					temp[i]=ptr1[i];
				else

					ptr1[i]='\0';
					printf("\nthe word is %s",temp);
			
			
			}





		
		
		}
		else
		{
		
		
			printf("\n\nInvalid option");
		
		}
	
	
	
	
	}





}
