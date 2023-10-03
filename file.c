#include<stdio.h>
int main()
{


	FILE *fptr;
	fptr=fopen("demo.txt","a+");
	char check='Z';
	char line_count=0,word_count=0,check[10];

	if(fptr==NULL)
	{
	
		printf("file is not created ");

	}
	else
	{
	
	
		printf("file is created sucessfully");
	//	fprintf(fptr,"%s","This is the new line in the file ");
	
	
	}
	rewind(fptr);

	while(fscanf(fptr,"%c",&check) != EOF)
	{
	
		
		printf("%c",check);
		if(check == '\n')
		{
			printf("\n");
			line_count++;
		}
		else if(check ==' ')
		{
			 
			 	word_count++;
			 
		}

		else
		{
		
			
			
		
		}		
	
	}

	printf("The number of lines in the file is %hhd",line_count);
	printf("\n The number of the words in the file is %hhd",word_count);

	printf("\nEnter the word to search :");
	scanf("%s",search);
	while(fscanf(fptr,%s,ch) != EOF)
	{
	
		for(i=0;search[i] !='\0' ;i++)
		{
		
			if(serach[i]==ch[i])
				flag=TRUE;
			else
				flag=FALSE;
		}
		if (flag
		
	
	
	}
	







}
