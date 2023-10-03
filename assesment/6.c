#include<stdio.h>
#include<stdlib.h>
//typedef char int8_t;
#define TRUE 1
#define FALSE 0
int main()
{


	int8_t data[10][10],temp[10],i=0,j=0,k=0,x=0,flag=0,n=0;
	int8_t *ptr,*ptr_8,*ptr_m[10];
	ptr=data;
	//ptr_8=(int8_t *)calloc(1,sizeof(data));
	printf("Enter the no of strings to save :");
	scanf("%hhd",&n);

	for(i=0;i<n;i++)
	{
	
		ptr_m[i]=(int8_t *)calloc(10,sizeof(int8_t));
	
	
	
	}
	printf("\nenter the data:");
	for(i=0;i<n;i++)
	{
		scanf("%s",ptr_m[i]);
	
	
	}

	printf("Displaying the entered data is :");
	for(i=0;i<n;i++)
	{
		printf("\n%s",ptr_m[i]);
	
	
	}
	//for(i=0;i<3;i++)
	//{	
	//	for(j=0;data[i][j] != '\0';j++)
	//		temp[j]=data[i][j];
	//	temp[j]='\0';
		

	//	printf("%s\t",temp);
	//	
	//}

	for(int y=0;y<n;y++)
	{

		
		
		for(i=0;i<n-1;i++)
		{
			k=i+1;
			flag=TRUE;

		for(j=0;(ptr_m[i][j]!='\0') && (ptr_m[k][j] !='\0');j++)
		{

			
		
			if((ptr_m[i][j] >ptr_m[k][j] && flag ==TRUE))
			{
				for(x=0;ptr_m[k][x] != '\0';x++)
				{
				
					temp[x]=ptr_m[k][x];
				
				}
				temp[x]='\0';

				for(x=0;ptr_m[i][x] != '\0';x++)
				{
					ptr_m[k][x]=ptr_m[i][x];
				
				}
				ptr_m[k][x]='\0';
				for(x=0;temp[x] != '\0';x++)
				{
				
					ptr_m[i][x]=temp[x];
				
				}
			
				flag=FALSE;
			}
			else if(ptr_m[i][j] ==data[k][j] && flag ==TRUE)
			{
			
				flag=TRUE;
			
			}
			else
			{
			
				flag=FALSE;
			
			
			
			}
				
				
		}

		printf("\n\n next stage sorting");
		for(int y=0;y<n;y++)
			printf("\n%s",ptr_m[y]);
			
	}
		
	
	
	
	
	}


	for(i=0;i<n;i++)
	{
		printf("\nPrinting the sorted values !!!");	
		printf("%s\n",ptr_m[i]);
	
	}

	for(i=0;i<n;i++)
		free(ptr_m[i]);



}
