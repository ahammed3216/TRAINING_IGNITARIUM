#include<stdio.h>
#include<stdlib.h>
//typedef char int8_t;
typedef int int32_t;
int main()
{
	int8_t name[10],i=0,string1[15],string2[15],string3[15],string_count1=0,string_count2=0,option,j=0,k=0,m=0,identical=0;
	int8_t *ptr_name,*ptr_string1,*ptr_string2,*ptr_string3,*ptr_stringcount2,*ptr_stringcount1,*ptr_8=NULL,*ptr1_8=NULL;
	int32_t count=0,*ptr_count;
	ptr_name=name;
	ptr_count=&count;

	ptr_string1=string1;
	ptr_string2=string2;
	ptr_string3=string3;

	ptr_stringcount1=&string_count1;
	ptr_stringcount2=&string_count2;


	

	

	printf("Enter A to save a string in an array\nEnter B to display the array content\nEnter C to concatentate 2 strings\nEnter D to Check the 2 strings are idntical\nEnter E to find the number of characters in the string\nEnter Q to Quit");
	printf("\n\nEnter the option :");
	scanf(" %c",&option);

	while(option != 'Q')
	{
		switch(option)
		{
			case 'A':

				printf("Enter the count of the array :");
				scanf("%d",ptr_count);
				
				ptr_8=(int8_t *)calloc(count,(sizeof(int8_t)));

				printf("\nEnter the string :");
					
				if(ptr_8 ==NULL)
				{
				
					printf("\ndynamic memory allocation is failed ");
				}
				else
				{
				for(i=0;i<*ptr_count;i++)
				{
		
					//scanf("%c",ptr_name+i);
					scanf(" %c",ptr_8+i);

				}

				*(ptr_8+i)='\0';


				
				

			
				printf("\nDisplaying the array content");
				for(i=0;i<*ptr_count;i++)
				{
					if (ptr_8[i]==' ')
					{
						printf(" ");
						
					}
					else
					{	
						printf("%c",ptr_8[i]);
					}
		
				}
				}
				free(ptr_8);
				break;

			case 'C':
				ptr_8=(int8_t *)calloc(10,sizeof(int8_t));
				ptr1_8=(int8_t *)calloc(10,sizeof(int8_t));
				printf("\n\nplease Enter 2 string then it will be concatenated as single string !!!!");
				printf("\nEnter the first string :");
				scanf("%s",ptr_8);
				
				printf("\nEnter the second string :");
				scanf("%s",ptr1_8);
		
				while(ptr_8[i] !='\0')
				{
					ptr_string3[i]=ptr_8[i];
					i++;
				
				}

				while(ptr1_8[j] !='\0')
				{
				
					ptr_string3[i]=ptr1_8[j];
					j++;
					i++;
				
				}
		
				
				ptr_string3[i]='\0';

				for(int8_t i=0;ptr_string3[i] != '\0';i++)
				{
		
					*ptr_stringcount1=*ptr_stringcount1+1;
				}

				printf("\nConcated string is %s",string3);
				printf("\nThe length of the concatenated string is %d",*ptr_stringcount1);
		
				free(ptr1_8);
				free(ptr_8);

				break;
		
		
			case 'D':
					
					ptr_8=(int8_t *)calloc(10,sizeof(int8_t));
					ptr1_8=(int8_t *)calloc(10,sizeof(int8_t));


					*ptr_stringcount1=0;
					*ptr_stringcount2=0;
					identical=0;
					printf("\nEnter the first string :");
					scanf("%s",ptr_8);
					printf("Enter the second string :");
					scanf("%s",ptr1_8);

					for(i=0;ptr_8[i] != '\0';i++)
						*ptr_stringcount1=*ptr_stringcount1 +1;

					for(i=0;ptr1_8[i] != '\0';i++)
						*ptr_stringcount2=*ptr_stringcount2 +1;

					if (*ptr_stringcount1 == *ptr_stringcount2)
					       printf("Size of the strings are same of length %d ",string_count1);
					else
					{
						printf("Size are not equal for the strings");
						printf("\nSize of the string1 %d",*ptr_stringcount1);
						printf("\nSize of the string2 %d",*ptr_stringcount2);
					}
			
					if(*ptr_stringcount1==*ptr_stringcount2)
					{
					
						for (i=0;i<*ptr_stringcount1;i++)
						{
						
							if(ptr_8[i]==ptr1_8[i])
							{
								identical++;
							}
						
						}

						if (identical == *ptr_stringcount1)
						{
							printf("\nStrings are identicals with count %d",string_count1);

						
						}
						else
						{
						
							printf("\nstrings are not identical with identicals is %d",identical);
						
						}
					
					}
					else
					{
					
						if (*ptr_stringcount1 > *ptr_stringcount2)
						{
							m=*ptr_stringcount2;
						}
						for(i=0;i<m;i++)
						{
							if (ptr_8[i] ==ptr1_8[i])
							{
							
								identical++;
							
							}
						
						}

						printf("\nStrings are not idneticals");
						printf("\nNumber od identicals in the strings are %d",identical);
					}			
				

					free(ptr_8);
					free(ptr1_8);	
					break;

			case 'E':	
					
					ptr_8=(int8_t *)calloc(10,sizeof(int8_t));

					*ptr_stringcount1=0;
					printf("\nEnter the string :");
					scanf("%s",ptr_8);
					for(i=0; ptr_8[i] != '\0';i++)
					{
						*ptr_stringcount1=*ptr_stringcount1+1;			
					}
					printf("\n The length of the string is %d",*ptr_stringcount1);

					free(ptr_8);

					break;

					

		}
		
		

printf("\nEnter the option  :");
scanf(" %c",&option);
	
}
}
