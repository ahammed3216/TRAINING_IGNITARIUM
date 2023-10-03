#include<stdio.h>
typedef char int8_t;
int8_t length(int8_t *a);
int main()
{

	int8_t check[15],i=0,j=0,k=0,arr[5][10],flag=-1,check_count=0,string_count=0;
	int8_t *ptr6=check,*ptr_arr[5];
	
	printf("Size = %d\r\n",sizeof(ptr_arr));
	for (i=0;i<5;i++)
	{
		ptr_arr[i]=arr[i];
	}

	
	for(i=0;i<5;i++)
	{
	
		printf("\nEnter the values into the array :");
		scanf("%s",ptr_arr[i]);
	
	}



	printf("\nEnter the string for search :");
	scanf("%s",ptr6);

	check_count=length(check);
	//printf("\ncount%d",check_count);

	//printf("%c",arr[0][0]);

	for(k=0;k<5;k++)
	{

		

		for(j=0;ptr_arr[k][j] !='\0';j++)
		{
			
			printf("%c",ptr_arr[k][j]);
		
		}

		printf("\n");


	
	
	}


	for(k=0;k<5;k++)
	{
		flag=-1;
		j=0;
		string_count=length(ptr_arr[k]);
		if(string_count==check_count)
		{

			while(ptr_arr[k][j] != '\0' && ptr6[j] !='\0')
			{
		
		
			//printf("%c\t%c",ptr_arr[k][j],ptr6[j]);
			
				if(ptr_arr[k][j] != ptr6[j])
				{
			
					flag=0;
					break;
			
				}	
				j++;
			}
		
			if (flag==-1)
			{
		
				printf("\nThe string is same!!!");
		
			}
			else
			{
				printf("\nThe string is not same!!!");
		
			}
		}
		else
		{
		
			printf("\nString are not of same length ");
		}
	
	
	
	}
	


	




}



int8_t length(int8_t *a)
{


	int8_t count=0,i=0;
	for(i=0;a[i] !='\0';i++)
	{
		count=count+1;
	
	}

	return count;
	


}
