#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void display_count(int8_t *a);
void concatenate(int8_t *a,int8_t *b);
int main(int argc,char *argv[])
{


	int8_t a=0;
	int count=argc;
	while(count>0)
	{
	
		printf("\nArgumrnt %dis %s",count,argv[count-1]);
		count--;
	
	
	}

	a=*(argv[1]);
	if(a == 65)
		display_count(argv[2]);
	else if(a==66)
		concatenate(argv[2],argv[3]);

	printf("\n a is%s",argv[3]);


return 0;
}


void display_count(int8_t *a)
{

	int8_t count=0,i=0;
	for(i=0;a[i] !='\0';i++)
		count++;

	printf("\nThe length of the string is %hhd",count);


}

void concatenate(int8_t *a,int8_t *b)
{

	int8_t result[15],i=0,j=0;
	for(i=0;a[i] !='\0';i++)
	{
		result[i]=a[i];
	}

	for(j=0;b[j]!='\0';j++,i++)
	{
	
		result[i]=b[j];
	
	}

	result[i]='\0';


	printf("\nThe concatenated string is %s",result); 



}
