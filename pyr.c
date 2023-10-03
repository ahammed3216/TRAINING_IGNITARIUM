#include<stdio.h>
typedef unsigned char int8_t;
int main()
{

	int8_t input=0,val=0;
	printf("Enter the step number :");
	scanf("%d",&input);

	for (int8_t i=1;i<=input;i++)
	{

                  val=input-i;
                  for(int8_t k=1;k<=val;k++)
                  {
                                printf(" ");
                        
                   }
		

		for(int8_t j=1;j<=i;j++)
		{
		
			printf("* ");
			
		
		}
                        
                

		printf("\n");
	
	}
	


}



