#include<stdio.h>
#include "app.h"

int8_t set_buffer(int8_t a,int8_t b)
{

	int8_t y=0,res=0;
	y=1<<b;
	res=a | y;

	//printf("%hhd",res);
	return res;




}

int8_t clr_buffer(int8_t a,int8_t b)
{

	int8_t res=0,y=0;
	y=~(1<<b);
	res=a &y;
	return res;
	

}


int8_t swap_buffer(int8_t a,int8_t b,int8_t c)
{

	
	int bit1=0,bit2=0;
	//printf("\n%hhd\t%hhd\t%hhd",a,b,c);
	bit1=check_bit(a,b);
	//printf("\na after is %hhd",a);
	bit2=check_bit(a,c);
	//printf("\nbit1 is%hhd",bit1);

	//printf("\nbit2 is %hhd\n",bit2);
	if(bit1==1)
	{
		a=set_buffer(a,c);
	
	}
	else
	{
		a=clr_buffer(a,c);

	
	}
	if(bit2==0)
	{
	
		a=clr_buffer(a,b);
	
	}
	else
	{
		a=set_buffer(a,b);
	
	}

	//printf("\nswapped:%hhd",a);

	return a;



}

int8_t check_bit(int8_t var1,int8_t var2)
{
	
	int y=0;
	y=1<<var2;
	if((var1 & y)==y)
		return 1;
	else
		return 0;




}

int8_t toggle_bit(int8_t a ,int8_t b)
{

	int bit=0;
	bit=check_bit(a,b);
	if(bit==0)
	{
		a=set_buffer(a,b);
	
	}
	else
	{
	
		a=clr_buffer(a,b);
	}
	//printf("\n%hhd",a);
	return a;

}


int8_t sign_conv(int8_t *a)
{

	int8_t res=0;

	res=(~(*a));
	res+=1;
	//printf("%hhd",res);
	return res;



}


int8_t binary(int8_t a)
{

	int binary=0;
	int8_t rem=0,i=1;
	if(a>=0)
	{

	while (a!=0)
	{
	
		rem=a%2;
		a=a/2;
		binary+=rem*i;
		i=i*10;
	
	}

	printf("\n%d",binary);
	}
	else
	{
		printf("\nPrinting the negative value bits");
	
	
	}
	return 0;

}


