#include<stdio.h>
typedef int int32_t;
int main()
{

	int32_t floor1,floor2,sour,dest,result;
	printf("Enter the source and destination floors :");
	
	scanf("%d%d",&floor1,&floor2);
	
	if (floor1%10==0)
	{
		sour=(floor1/10);
	
	}
	else
	{
		sour=(floor1/10)+1;
	
	}
        if (floor2%10==0)
        {
                dest=(floor2/10);

        }
        else
        {
                dest=(floor2/10)+1;

        }
	
	if (floor2>floor1)
	{
		
		result=dest-sour;
		printf("Going the floor upwards is %d",result);
	
	}
	else if (floor1>floor2)
	{
		result=sour-dest;
		printf("Going the floor downward is %d",result);
	}
	else
	{
	
		printf("Are in the same floor");
	
	}
	




}
