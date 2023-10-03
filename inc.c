#include<stdio.h>
int main()
{


	int cnt=0;
	int arr[10]={10,20,30,40,50};

	int *ptr=arr;

	while(cnt<5)
	{
	
	
	
		printf("\n%d",*ptr++);
		printf("\n%d",++*ptr);
		cnt++;
	}



}
