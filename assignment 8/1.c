#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdarg.h>
int8_t print(int8_t *count,...);
int main()
{

	int8_t i=0;
	print("the number is %d the float is %f the char is %c",1,10.5,'a');
	return 0;






}

int8_t print(int8_t *count,...)
{

	int8_t i=0;
	va_list list;
	va_start(list,count);
	
	for(i=0;count[i] != '\0';i++)
	{
	if(count[i] =='%')
	{
	
		i++;
		if(count[i] =='d')
			printf("%d",va_arg(list,int));
		else if(count[i]=='f')
			printf("%f",va_arg(list,double));
		else
			printf("%c",va_arg(list,int));
	}
	else
		printf("%c",count[i]);
	}

}
