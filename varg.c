#include<stdio.h>
#include<stdarg.h>
typedef char int8_t;
int8_t add(int8_t count,...);
int main()
{

		int8_t i=0,n,a[10];
		printf("Enter the number of aguments:");
		scanf("%hhd",&n);
		printf("\nEnter the arguments :");
		for(i=0;i<n;i++)
			scanf("%hhd",(a+i));

		add(n,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);



}

int8_t add(int8_t count,...)
{

	int8_t val=count,result=0;
	va_list list;
	va_start(list,count);
	while(val--)
	{
		result+=va_arg(list,int);
	
	
	}
	printf("%hhd",result);
	


}

