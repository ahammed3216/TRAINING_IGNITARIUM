#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{


	int8_t i=0,option='Z',str[10],n=0,j=0;
	int8_t *ptr1,*ptr2,*ptr_res,*ptr_arr[10];

	while (option != 'Q')
	{

		printf("\n\nEnter the option \nEnter A to find the substring\nEnter B to find the position of a character o the string\nEnter C to compare 2 strings\nEnter D to sort the strings");
		scanf("%c",&option);
	
		ptr1=(int8_t *)calloc(10,sizeof(int8_t));
                ptr2=(int8_t *)calloc(10,sizeof(int8_t));
                ptr_res=(int8_t *)calloc(10,sizeof(int8_t));
		
		if(option =='A')
		{
			

			printf("Enter the first strin\r\n");
			scanf("%c",&option);//dummy scan
			fgets(ptr1,10,stdin);
			printf("\nEnter the second string :\r\n");	
			fgets(ptr2,10,stdin);
		
			ptr_res=strstr(ptr1,ptr2);
			printf("\nThe substring of the string is %s",ptr_res);

		

		}
		else if(option =='B')
		{
		
			printf("\nEnter the string :");
			scanf("%c",&option);
			fgets(ptr1,10,stdin);
			printf("\nEnter the character to search");
			fgets(ptr2,10,stdin);
			ptr_res=strchr(ptr1,*ptr2);
			printf("\nThe string after the character %s is %s ",ptr1,ptr_res);
			
			break;
		
		
		}
		else if(option =='C')
		{
		
		
			printf("\nEnter the first string :");
			scanf("%c",&option);//dummy scan
			fgets(ptr1,10,stdin);
			printf("ENter the second string ");
			fgets(ptr2,10,stdin);
			*ptr_res=strcmp(ptr1,ptr2);

			if(*ptr_res<0)
				printf("%s is greater than %s",ptr2,ptr1);
			else if(*ptr_res>0)
				printf("%s is greater than %s",ptr1,ptr2);
			else
				printf("\n2 strings are of same length");
		
		
		
		}
		else if(option =='D')
		{
		
			printf("\nNumber of strings to sort");
			scanf("%hhd",&n);
			for(i=0;i<n;i++)
				ptr_arr[i]=(int8_t *)calloc(10,sizeof(int8_t));

			printf("\nEnter the string values ");
			scanf("%c",&option);
			for(i=0;i<n;i++)
			{
			
				fgets(ptr_arr[i],10,stdin);
			
			
			}

			printf("\nPrinting the entred values are!!!");
			for(i=0;i<n;i++)
				printf("%s\n",ptr_arr[i]);


			for(i=0;i<n-1;i++)
			{
			
				for(j=0;j<n-1;j++)
				{
				
					if(strcmp(ptr_arr[i],ptr_arr[j]) >0)
					{
					
						strcpy(ptr_res,ptr_arr[i]);
						strcpy(ptr_arr[i],ptr_arr[j]);
						strcpy(ptr_arr[j],ptr_res);
					
					
					
					}
				
				
				}
			
			
			
			}


			printf("\nPrinting the sorted array :");
			for (i=0;i<n;i++)
			{
			
			
				printf("%s\n",ptr_arr[i]);
			
			}
		
		
		
		
		
		}


		else if(option =='Q')
		{
		
			printf("Quiting!!!!");
			break;
		
		
		}
		else
		{
		
			printf("\nInvalid option !!!!");
			break;
		
		
		}

	
	
		free(ptr1);
                free(ptr2);
                free(ptr_res);

	
	
	
	
	}









}
