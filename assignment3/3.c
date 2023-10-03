#include<stdio.h>
typedef int int32_t;
typedef char int8_t;
int main()
{

	int32_t string1[10],sort_string[10],i=0,j=0,temp=0;
	int32_t *ptr_string =string1,*ptr_sort=sort_string;
	int8_t option;
	printf("Enter the 10 values to the array:\n");
	for(i=0;i<10;i++)
	{
	
		scanf("%d",ptr_string+i);
	}

	printf("Enter A for accending order and D for descending order \n");
	scanf(" %c",&option);
	
	if (option == 'D')
	{
	for(i=0;i<10;i++)
	{
	
		for(j=0;j<10;j++)
		{
		
			if(ptr_string[i]>ptr_string[j])
			{
			
				temp=ptr_string[i];
				ptr_string[i]=ptr_string[j];
				ptr_string[j]=temp;
			
			}
			
		
		}
	
	
	}


	printf("number sorted after the deccesnding order :\n");

	for(i=0;i<10;i++)
	{
	
		printf("%d\t",ptr_string[i]);
	
	}
	

	}

	else if (option == 'A')
	{

	for(i=0;i<10;i++)
        {

                for(j=0;j<10;j++)
                {

                        if(ptr_string[i]<ptr_string[j])
                        {

                                temp=ptr_string[i];
                                ptr_string[i]=ptr_string[j];
                                ptr_string[j]=temp;

                        }


                }


        }

	printf("\nSorted the string in accending order\n");

	for(i=0;i<10;i++)
	{
	
		printf("%d\t",ptr_string[i]);
	
	
	}
	}

	else
	{
		printf("\ninvalid option !!!");
	
	}

}

