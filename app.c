#include<stdio.h>
#include"app.h"


int32_t *add(int32_t *a ,int32_t *b)
{

	printf("\n IN add block ");
	printf("\n%f\t%f",*a,*b);
	result=*a + *b;
	printf("\n%f",result);
	return (&result);

}



