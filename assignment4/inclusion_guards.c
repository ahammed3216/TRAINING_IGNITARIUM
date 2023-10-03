#include<stdio.h>

#include"app2.h"
#include "app1.h"

int main()
{


	int var1,var2;
	printf("\nEnter the 2 numbers: ");
	scanf("%d%d",&var1,&var2);
	printf("\nThe sum of the numbes is %d :",add(var1,var2));
	printf("\nthe difference of the numbers is %d :",SUB(var1,var2));




}

int add(int a ,int b)
{

	return (a+b);

}
