#include<stdio.h>
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
typedef char int8_t;
typedef struct Empl
{

	uint8_t EmpName[10];
	uint32_t EmpId;
	float ctc;
	uint32_t Doj;


}st_emp;

st_emp emp[10],dummy;


st_emp *ptr1=emp;


int8_t WriteEmpData(uint8_t IndexNo, st_emp *Sptr);
uint8_t ReadEmpData(uint32_t EmplId, st_emp *sptr,int8_t size);
int8_t SearchDoj(uint32_t Doj, st_emp *Rsptr);
st_emp * CheckDetails(int8_t option, uint32_t *Idptr, int8_t *Nameptr);
int8_t clear_data(uint32_t a);
int8_t empty_check();
int8_t max_ctc(void);
void display_values();
int main()
{


	int8_t n=0,i=0,option='Z',val=0,count=0,op=0,name[15];
	uint32_t check_doj=0,id;
	st_emp *ptr2=&dummy;
	//printf("Enter the number of employees to store the data :");
	//scanf("%hhd",&n);
	
	while(option !='Q')
	{
		printf("\n\nEnter A for adding the data into the database"
				"\nEnter B to enter the data into a id"
			       "\nEnter C to get the number of details in the datavse"
		       "\nEnter D ro display the details in the databse"
			"\nEnter E to serach the data in the database"
	 	"\nEnter F to find the joinees in a date"
		"\nEnter G to delete a purticuar entry"
		"\nEnter H to get the detail of the employee with highest ctc"
		"\nEnter Q to Quit");


		printf("\n \n \nEnter the option :");
		scanf(" %c",&option);
		if(option =='A')
		{
			
	

				val=WriteEmpData(i,(ptr1));
			
			
			
		}
		else if(option =='B')
		{
		
		
			printf("\nenter the id to check:");
			scanf("%u",&id);
			val=ReadEmpData(id,ptr1,n);
			if(val==0)
			{

				printf("\nthe data is added successfully");
			}
			else if(val==-1)
			{
			
				printf("\nThe databse is full");
				
			
			}
			else
			{
				printf("\nAlready registred employee");
			}

		
		}
		else if(option=='C')
		{
		
		
			printf("The number od details in the database is %hhd",empty_check());
			
		
		}
		else if(option =='Q')
		{ 
		       
			printf("\nQuiting");
		}
		else if(option =='D')
		{
			display_values();
		}
		else if(option=='E')
		{
				
			printf("\nENter 1 to search with id\nEnter 2 to search with name");
		       	scanf("%hhd",&op);
			printf("\nEnter the id to search ");
			scanf("%u",&id);
			printf("\nEnter the name to search ");
		        scanf("%s",name);
			ptr2=CheckDetails(op,&id,name);
			
			
			printf("\nName is %s",ptr2->EmpName);
			printf("\nEmployee id is %u",ptr2->EmpId);
			printf("\nEmployee ctc is %f",ptr2->ctc);
			printf("\nEmployee DOH is %d",ptr2->Doj);
			
			
			
				
		
		}
		else if(option == 'F')
		{
		
			printf("\nEnter the DOJ to search :");
			scanf("%d",&check_doj);
			printf("\nNo of employess joined in this DOj is %d",SearchDoj(check_doj,ptr1));
		
		
		}
		else if (option =='G')
		{
			printf("\nEnter the id to make delete ");
			scanf("%d",&id);
		
			val=clear_data(id);
			printf("\nname after the deletion is %s",(ptr1+id)->EmpName);
			printf("\nId after the deleting the data is %d",(ptr1+id)->EmpId);
		
		
		}
		else if(option=='H')
		{
		
			val=max_ctc();
			printf("\nThe name of the employee is %s",(ptr1+val)->EmpName);
			printf("\nThe Emplyee id is %d",(ptr1+val)->EmpId);
			printf("\nThe ctc of the employee is %f",(ptr1+val)->ctc);
			printf("\nThe DOJ of the employee is %d",(ptr1+val)->Doj);
		
		}
		else
		{
		
			printf("\nInvalid option");
		}
			

	}





}


int8_t WriteEmpData(uint8_t a,st_emp *b)
{

	//printf("check%d",((ptr1+a)->EmpId));
	int8_t i=0,j=0,flag=0,option='Q';
	uint32_t temp=0;
	for(j=0; option !='S';j++)
	{

	if((b+j)->EmpId ==0)
	{


		printf("sucess");
		printf("\nEnter the name of the employee ");
		scanf("%s",(b+j) -> EmpName);
		printf("\nEnter the Employee id ");
start:
		flag=0;
		scanf("%u",&temp);
		printf("\ntemp%u",temp);
		while(flag == 0)
		{
		for(i=0;i<10;i++)
		{
			if((ptr1+i)->EmpId ==temp)
			{
				flag=-1;
	                        printf("\nId exist ,enter the new id !!!!");
               	                goto start;



			
			}
			
		
		
		}
		if(flag ==0)
			break;
		}
		(ptr1+j)->EmpId=temp;
		
		printf("\nEnter the ctc");
		scanf("%f",&((b+j) -> ctc));
		printf("Enter the DOJ");
		scanf("%u",&((b+j) -> Doj));
		//printf("%s",ptr1->EmpName);

		
	}
		printf("\nPlesse Enter C to continue and S to stop");
		scanf(" %c",&option);
		if(j==3)
			break;
			

	}
	
	
	if(j>2)
	{
	
		printf("\nSize got overflowed!!!");
		return 0;
	}
	else
	{
	
		printf("\nTotal size of the database is over !!!");
	}
	


}

uint8_t ReadEmpData(uint32_t EmplId, st_emp *sptr,int8_t size)
{
	
	
	int8_t i=0,flag=0;
	
	for(i=0;i<10;i++)
	{	printf("\n%d",(sptr+i)->EmpId);
		if((sptr+i)->EmpId == EmplId)
		{
		
			flag=1;
			return 1;
		
		}
		
	}
	if(flag==0)
	{
	
		for(i=0;i<10;i++)
		{
			printf("\nchecking space %hhd",i);
			if((sptr+i)->EmpId==0)
			{
				printf("Enter the name :");
				scanf("%s",(sptr+i)->EmpName);
				printf("\nEnter the id :");
				scanf("%d",&((sptr+i)->EmpId));
				printf("\nEnter the ctc");
				scanf("%f",&((sptr+i)->ctc));
				printf("\nEnter the DOJ :");
				scanf("%u",&((sptr+i)->Doj));
				return 0;
			}
		
		}
	
	
	}

	return -1;


}


st_emp * CheckDetails(int8_t option, uint32_t *Idptr, int8_t *Nameptr)
{
	int8_t i=0,flag=0,res=0,count1=0,count2=0,j=0,k=0;

	int8_t length(int8_t *a)
	{
	
		int8_t count=0,k=0;
		for(k=0;a[k] != '\0';k++)
		{
			count++;
		}

		return count;
	
	
	}

	if(option ==1)
	{


		for(i=0;i<10;i++)
		{
		
			if((ptr1+i)->EmpId == *(Idptr))
			{
			
				flag=1;
				//printf("%f",(ptr1+i)->ctc);
				return (ptr1+i);
			
			}
		
		}
		if(flag==0)
		{
			printf("It is not found");
			res=0;
			
		}
	
	}
	else
	{
		count1=length(Nameptr);
		printf("IN the search block ");	
		for(i=0;i<10;i++)
		{
		
			for(j=0;((ptr1+i)->EmpName)[j] != '\0'&& Nameptr[j] !='\0';j++)
			{
				if(((ptr1+i)->EmpName)[j] == Nameptr[j])
				{
					flag=0;
				}
				else
					flag=-1;
			
			}
			if(flag==0)
			{
				return (ptr1+i);
			
			}	
			else
			{
			
				printf("\nThe entred data is not present in the database");

			}	
		
		}
	
	}

}


int8_t SearchDoj(uint32_t Doj, st_emp *Rsptr)
{

	int8_t i=0,count=0;
	for(i=0;i<10;i++)
	{
	
		if((Rsptr+i)->Doj == Doj)
		{
			count=count+1;
		}
	
	}
	printf("\ncount is %hhd",count);
	return count;


}

int8_t max_ctc(void)
{
	int8_t i=0,value=0;
	float max=-1;
	
	for(i=0;i<10;i++)
	{		
		//printf("\nc:%f",(ptr1+i)->ctc);
	
		if((ptr1+i)->ctc > max)
		{
			max=(ptr1+i)->ctc;
			value =i;
		
		}
		
	
	}
	return value;

}

int8_t clear_data(uint32_t a)
{
	int8_t i=0,j=0;
	for(i=0;i<10;i++)
	{
	
		if((ptr1+i)->EmpId == a)
		{	
	
	

			for(j=0;((ptr1+i)->EmpName)[j] != '\0';j++)
			{
				((ptr1+i)->EmpName)[j]=0;
	
			}
			(ptr1+i)->EmpId=0;
			(ptr1+i)->ctc=0;
			(ptr1+i)->Doj=0;
		}
	}	



	return 0;
}

int8_t empty_check()
{

	int8_t value=0,i=0;
	for(i=0;i<10;i++)
	{
	
		if((ptr1+i)->EmpId !=0)
			value++;
	
	}
	return value;


}

void display_values()
{

	int8_t i=0;
	for(i=0;i<10;i++)
	{
		printf("%f\t",(ptr1+i)->ctc);
	
	}


}















