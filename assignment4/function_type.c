#include<stdio.h>
inline int add(int a ,int b);
#define SUB(a,b) a-b
int main()
{


	int var1,var2;
	printf("\nEnter the 2 numbers: ");
	scanf("%d%d",&var1,&var2);
	printf("\nThe sum of the numbes is %d :",add(var1,var2));
	printf("\nthe difference of the numbers is %d :",SUB(var1,var2));




}
int add(int a,int b)
{

	return a + b;


}
