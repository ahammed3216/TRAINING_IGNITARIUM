#include<stdio.h>
typedef char int8_t;
int main()
{


	int8_t word[15],option='Z',count=0,n=0,i=0,word1[15],j=0,k=0,flag=0,search_word[15];
	//printf("%hhdvalue of the space is",h); 
	printf(":Enter the ;ength of the string");
	scanf("%hhd",&n);

	printf("Enter the string ");
	for(i=0;i<n;i++)
	{
	
		scanf("%c",&(word[i]));
	
	}
	word[i]='\0';
	
	

	while (option !='Q')
	{

		printf("Enter A to count the words \nEnter B to find the word in the sentence\nEnter the option ");
		scanf(" %c",&option);
		if(option=='A')
		{
			for(i=0;word[i] != '\0';i++)
			{
				printf("%c",word[i]);
				if(word[i] ==32)
					count++;
			
			
			}
			
			printf("\nThe number of word in the input is %hhd",count);		
		
		}
		else if(option =='B')
		{
		
			printf("\nEnter the word to seaech ");
			scanf("%s",search_word);
			for(i=0;word[i] != '\0';i++)
			{	
				//printf("c%s",word1);
				if(word[i] != 32)
				{	

					printf("%s",word1);
					for(j=0;search_word[j] != '\0';j++)
					{
						if(search_word[j] == word1[j])
						{
							flag=1;
						}
						else
						{
							flag=-1;
							
						
						}
						if(flag==-1)
							break;
					
					}
					if(flag==1)
					{
						printf("The word is found at this sentence");
					}

					k=0;
					
				}
				else
				{
					word1[k]=word[i];
				}


			
			}
			printf("\nThe wrd is not in the sentence you entred");
		
		
		}
		else if(option=='Q')
			printf("\nQuitting the application");
	
	
	}

}
