#include<stdio.h>
int varx=10;
int add(int a,int b)
{

	static int result=0;
       	result=result+a+b;
	return result;


}
int main()
{
	printf("\n%d",add(10,20));
	printf("\n%d",add(30,40));
	
}
