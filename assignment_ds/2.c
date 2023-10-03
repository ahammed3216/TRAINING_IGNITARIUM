#include<stdio.h>
#include<stdlib.h>
typedef struct BinaryTree
{

	struct BinaryTree *left;
	int8_t data;
	struct BinaryTree *right;



}BinTr;
BinTr *ptr_left,*ptr_right,*head=NULL,*ptr_curr;

int8_t m_data;


int8_t InsertData();
int8_t DisplayData();

int main()
{


	InsertData();
	DisplayData();





}

int8_t InsertData()
{


	int8_t n=0,i=0;
	BinTr *ptr;
	printf("How many datas to be needed :");
	scanf("%hhd",&n);
	for(i=0;i<n;i++)
	{
		if(head==NULL)
		{
		
			head=(BinTr *)malloc(sizeof(BinTr));
			scanf("%hhd",&(head->data));
			ptr_left=(BinTr *)malloc(sizeof(BinTr));
			ptr_right=(BinTr *)malloc(sizeof(BinTr));
			ptr_curr=head;
		
		
		
		}
		else
		{
		
		
			scanf("%hhd",&m_data);
			if(m_data > ptr_curr->data)
			{
			
				ptr_curr->left=ptr_left;
				(ptr_left->data)=m_data;
				ptr_curr=ptr_left;
				ptr_right=(BinTr *)malloc(sizeof(BinTr));
				ptr_left=(BinTr *)malloc(sizeof(BinTr));
			
			}
			else
			{
				scanf("%hhd",&m_data);
				if(m_data < ptr_curr->data)
				{
				
				
					ptr_curr->right=ptr_right;
					(ptr_right->data)=m_data;
					ptr_curr=ptr_right;
					ptr_right=(BinTr *)malloc(sizeof(BinTr));
					ptr_left=(BinTr *)malloc(sizeof(BinTr));
				
				
				
				}
			
			
			
			}

		
		
		}
	
	
	
	}




}


int8_t DisplayData(BinTr *a)
{


	
	printf("The first element in the Binary Tree is %hhd",head->data);




}
