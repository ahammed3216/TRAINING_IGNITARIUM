#include<stdio.h>
typedef int int32_t; 
int main()
{


	float data[15],avg=0,sum=0;
	int32_t num=0,count=0,*ptr1;
	float *ptr2;
	ptr1=&num;
	ptr2=data;

	char state='C';
	printf("Enter the data range :");
	scanf("%d",ptr1);
	printf("Enter the numbers :");
	
	for (int32_t i =0;i<num;i++)
	{
		
		scanf("%f",ptr2+i);
		
		
	
	}
	ptr2=data;

	for(int32_t i=0;i<num;i++)
	{
	
		printf("%f\t",ptr2[i]);
	}

	for(int32_t i=0;i<num;i++)
	{
		sum=sum+ptr2[i];
	
	}
	
	
	avg=(float)sum/num;
	
	printf("The average is %f",avg);

	
	sum=0;
	while(state=='C')
	{
		sum=0;
		
		printf("\nEnter the next number to update :");
		scanf(" %f",&data[count]);
		for (int32_t i=0;i<num;i++)
		{
			printf(" %f\t",ptr2[i]);
		
		}

		for(int32_t i=0;i<num;i++)
		{
		
			sum=sum+ptr2[i];
		
		}
       		 

		 avg=(float)sum/num;

		 printf("\nThe sum of the array is : %f",sum);

		 printf("\nThe average of the number is %f",avg);

		 count=count+1;
		 if (count==num)
		 {
		 	count=0;
		 
		 }

		 printf("\nEnter C for continue the process And Press ANy other Key to exit");
		 scanf(" %c",&state);


	}
	
	



}
