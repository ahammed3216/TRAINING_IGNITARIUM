#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{

	int8_t name[10];
	int32_t id;
	float ctc;
	int8_t level;



}str_emp;
int main()
{


	int8_t i=0,n=0,extra=0;
	str_emp *ptr1=NULL,*ptr2=NULL;
	printf("Enter the number of employees to enter the data");
	scanf("%hhd",&n);

	ptr1=(str_emp *)calloc(n,sizeof(str_emp));


	for(i=0;i<n;i++)
	{
	
		printf("\nEnter the name :");
		scanf("%s",(ptr1+i)->name);
		printf("\nEnter the id of the employee :");
		scanf("%d",&((ptr1+i)->id));
		printf("\nEnter the ctc of the employee :");
		scanf("%f",&((ptr1+i)->ctc));
		printf("\nENter the level of the employee ");
		scanf("%hhd",&((ptr1+i)->level));

	
	
	
	}
	printf("Enter the no of more employees to add the data :");
	scanf("%hhd",&extra);
	
	ptr2=(str_emp *)realloc(ptr1,(extra+n)*sizeof(str_emp));

	for(i=n;i<(extra+n);i++)
        {

                printf("\nEnter the name :");
                scanf("%s",(ptr2+i)->name);
                printf("\nEnter the id of the employee :");
                scanf("%d",&((ptr2+i)->id));
                printf("\nEnter the ctc of the employee :");
                scanf("%f",&((ptr2+i)->ctc));
                printf("\nENter the level of the employee ");
                scanf("%hhd",&((ptr2+i)->level));




        }


	for(i=0;i<(extra+n);i++)
	{
	
		printf("\nThe name of the emplyee %hhd is %s",i+1,(ptr1+i)->name);
		printf("\nThe id of the employee %hhd is %d",i+1,(ptr1+i)->id);
		printf("\nThe ctc of the employee %hhd is %f",i+1,(ptr1+i)->ctc);
		printf("\nthe level of the employee %hhd is %hhd",(i+1),(ptr1+i)->level);

		printf("\n\n\n");
	
	}





}
