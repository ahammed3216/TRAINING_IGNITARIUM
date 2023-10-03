#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node  *next;
	


}st_node;
st_node *ptr_next;
st_node *head;
int8_t add_node(int a);
int8_t display();
int8_t add_last(int a);
int main()
{
	int8_t option='Z';
	head=NULL;
	while(option !='Q')
	{


		printf("\nEnter A to enter the node \nENter C to the last node \nEnter D to display the data ");
	
		scanf(" %c",&option);
		if(option =='A')
		{
			add_node(45);
		
		
		}
		
		else if(option=='C')
		{
		
			add_last(60);
		}
		else if(option =='D')
		{
		
			display();
		
		}
		else if (option=='Q')
		{}
		else
			printf("\nInvalid option");
	
	
	}
	

}


int8_t add_node(int data)
{


	if (head==NULL)
	{
	
		head=(st_node *)malloc(sizeof(st_node));
		head->data=data;
		ptr_next=(st_node *)malloc(sizeof(st_node));
		head->next=ptr_next;
		printf("t:%hhd",head->data);	
		printf("\nData enetred sucessfully");
	
	}
	else
	{
		printf("\np:%hhd",(ptr_next->data));
		ptr_next->data=data;
		printf("\tc:%hhd:",ptr_next->data);
		ptr_next->next=(st_node *)malloc(sizeof(st_node));
		ptr_next=ptr_next->next;
		printf("\nData entred sucessfully");
	
	
	}



}



int8_t display()
{

	st_node *ptr;
	printf("the first item in the list is %hhd",head->data);
	ptr=head->next;
	//printf("\n%hhd",ptr->data);
	while(ptr !=NULL)
	{
		//printf("1");
		printf("\n%hhd\t",ptr->data);
		ptr=ptr->next;
		
	
	
	
	}



}

int8_t add_last(int data)
{



	ptr_next->data=data;
	ptr_next->next=NULL;
	printf("\nData Entred succesfully");


}
