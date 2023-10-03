#include<stdio.h>
#include<stdlib.h>
int main()
{

	int8_t a[10][10],i=0;
	//int8_t *ptr[10];
	int8_t *ptr;
	ptr=a;
/*	for(i=0;i<5;i++)
	{
		ptr[i]=a[i];
	}*/

	for(i=0;i<5;i++)
		scanf("%s",ptr+i);


	for(i=0;i<5;i++)
		printf("\n%s",ptr+i);
	


	


}
