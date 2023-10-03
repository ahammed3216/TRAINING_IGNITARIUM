#incluie<stdio.h>
typedef char int8_t;
void sort(void);
int main()
{


	int8_t str[10],i=0,k=0,j=0,option='Z',n,even[10],odd[10],odd_count=0,even_count=0,temp=0,sorted[15],new=0;
	printf("Enter the size of the array ");
	scanf("%hhd",&n);
	printf("Enter the values into the array");
	for(i=0;i<n;i++)
	{
		scanf("%hhd",(str+i));

		
	}
	while (option !='Q')
	{
	printf("Enter A to sort the array\nEnter b to add a value\nENter the option :");
	scanf(" %c",&option);

	if (option =='A')
	{
		
	
	
		for(i=0;i<n;i++)
		{
		
			if(str[i] %2 ==0)
			{
				even[j]=str[i];
				j++;
			
			}
			else
			{
			
				odd[k]=str[i];
				k++;
			}	
		
		}
		odd_count=k;
		even_count=j;

		for(i=0;i<even_count;i++)
		{
		
			for(k=0;k<i;k++)
			{
			
				if(even[i] > even[k])
				{
				
					temp=even[k];
					even[k]=even[i];
					even[i]=temp;
				
				}
			
			}
		
		}



		for(i=0;i<odd_count;i++)
		{
		
			for(k=0;k<i;k++)
			{
			
				if(odd[i]<odd[k])
				{
					temp=odd[k];
					odd[k]=odd[i];
					odd[i]=temp;
				
				
				}
			
			}
		
		}
		j=0;
		printf("printing the sorted values ");
		for(i=0;i<even_count;i++)
		{
			//printf("%hhd\t",even[i]);
			sorted[j]=even[i];
			j++;
		}
		//printf("\nPrintinf=g odd values");
		for(i=0;i<odd_count;i++)
		{
			//printf("%hhd\t",odd[i]);
			sorted[j]=odd[i];
			j++;
		}
		for(i=0;i<(odd_count+even_count);i++)
			printf("%hhd\t",sorted[i]);

		
		
	
		
	}
	else if(option =='B')
	{
	
		printf("\nEnter the new number ");
		scanf("%hhd",new);
		
		if (new %2==0)
		{
			for(i=0;i<even_count;i++);
			even[i]=new;
			printf("hh");
		
		even_count++;

		for(i=0;i<even_count;i++)
		{
		
			for(k=0;k<i;k++)
			{
			
				if(even[i] > even[k])
				{
				
					temp=even[k];
					even[k]=even[i];
					even[i]=temp;
				
				}
			
			}
		
		}
		}
		else
		{

		for(i=0;i<odd_count;i++);
		odd[i]=new;
		odd_count++;

		for(i=0;i<odd_count;i++)
		{
		
			for(k=0;k<i;k++)
			{
			
				if(odd[i]<odd[k])
				{
					temp=odd[k];
					odd[k]=odd[i];
					odd[i]=temp;
				
				
				}
			
			}
		
		}



		
		}
				printf("printing the sorted values ");
		for(i=0;i<even_count;i++)
		{
			//printf("%hhd\t",even[i]);
			sorted[j]=even[i];
			j++;
		}
		//printf("\nPrintinf=g odd values");
		for(i=0;i<odd_count;i++)
		{
			//printf("%hhd\t",odd[i]);
			sorted[j]=odd[i];
			j++;
		}
		for(i=0;i<(odd_count+even_count);i++)
			printf("%hhd\t",sorted[i]);
		
		
		
	
	}

	}

}

