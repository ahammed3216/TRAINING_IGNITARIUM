#include<stdio.h>
typedef char int8_t;
typedef int int32_t;
typedef float float32_t;
int main()
{
	
	
	union Emp
	{

		int8_t Emp_name[10];
		int32_t Emp_id;
		float32_t ctc;
		double x;
		int8_t des_id;
		

	};

	union Emp obj1,obj2[30];

	union Emp *ptr=&obj1,*ptr_arr=obj2;
	
	int8_t option='Z',u1=0,n=0,i=0,id=0;
	
	printf("Enter the nof of emplyers ");
	scanf("%hhd",&n);

	for(i=0;i<n;i++,ptr_arr++)
	{
		printf("\nEnter the employee name :");
		scanf("%s",ptr_arr->Emp_name);

		printf("\nEnter the employee id :");
		scanf("%d",&(ptr_arr->Emp_id));

		printf("\nEnter the employee ctc :");
		scanf("%f",&(ptr_arr->ctc));

		printf("Enter the designation id :");
		scanf("%hhd",&(ptr_arr->des_id));

		
	}
	printf("\n\n\nTotal size of the structure is%ld ",sizeof(obj1));

	while (option != 'Q')
	{

		printf("\nENTER U FOR UPDATE THE DATA"
				"\nPRESS D FOR THE DISPLAY OF DATA"
				"\nPRESS Q FOR QUIT\n");

		scanf(" %c",&option);
	if(option =='D')
	{

		printf("\nEnter the id of the employee to display or Press A for all the details :\n");
		scanf(" %hhd",&id);
		if (id == 65)
		{
		
			for(i=0;i<n;i++,ptr_arr++)
			{
			
					printf("\nName of the employee is %s ",ptr_arr->Emp_name);
					printf("\nEmployee is id is %d ",ptr_arr->Emp_id);
					printf("\nCTC of the employee is%f ",ptr_arr->ctc);
					printf("\nDesignation id of the employee is%hhd ",ptr_arr->des_id);
			}
		
		}
		else
		{
			for(i=0;i<n;i++,ptr_arr++)
			{
				if (ptr_arr->Emp_id == id)
				{
					printf("\nName of the employee is %s ",ptr->Emp_name);
					printf("\nEmployee is id is %d ",ptr->Emp_id);
					printf("\nCTC of the employee is%f ",ptr->ctc);
					printf("\nDesignation id of the employee is%hhd ",ptr->des_id);
				}
				else
				{
					printf("\nThe employee with this id is not registred");
			
				}
			}
		}
	}
	else if (option =='U')
	{	

		printf("\n\n\nEnter 1 for name"
				"\nEnter 2 for id "
				"\nEnter 3 for ctc"
				"\nEnter 4 for level");
		scanf(" %hhd",&u1);
	
		if(u1==1)
		{
		
			printf("\nEnter the name to update");
			scanf("%s",ptr->Emp_name);
			printf("\nname is updated successfully");
		}
		else if (u1==1)
		{
		
			printf("\nEnter the employee id to update");
			scanf("%d",&(ptr->Emp_id));
			printf("\nId is updated successfully");

		
		}
		else if(u1==3)
		{
		
			printf("\nEnter the ctc to update");
			scanf("%f",&(ptr->ctc));
			printf("\nc updated sucessfully");
		}
		else if(u1==4)
		{
		
			printf("\nEnter the level to update ");
		
			scanf("%hhd",&(ptr->des_id));
			printf("\nLevel updated sucessfully");
		
		}
		else
		{
			printf("\nINVALID OPTION IS SELECTED\n");
		
		}
	
	
	}
	else if (option =='Q')
	{
	
		printf("\nQuiting!!!!!\n");
		break;
	
	
	}
	else{
	
		printf("\nInvalid option is selected\n");
	}
	}






}
