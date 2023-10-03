#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

//typedef char int8_t;
int main()
{
        int8_t a[10],i=0,temp[10],search[10],flag=FALSE,replace[10],original[10],y=0,j=0;
        int8_t n=0,k=0,x=0;
	int8_t *ptr;
	printf("Enter the no of characters in the string :");
        scanf("%hhd",&n);
	
	

	ptr=(int8_t *)calloc(n,sizeof(int8_t));
	printf("\nEnter the charcters:");
	scanf("%c",a);
        for(i=0;i<n;i++)
        	scanf("%c",(ptr+i));
        *(ptr+i)='\0';

	//for(i=0;a[i] != '\0';i++)
		//printf("%c",a[i]);

//	printf("\n%s\r\n",a);
	printf("Enter the string to replace :");
	scanf("%s",search);
	printf("The serach values is %s",search);
	printf("\nEnter the string to be replace");
	scanf("%s",replace);
	printf("\nthe replace value is %s",replace);
        for(i=0,k=0;i<(n+1);i++,k++)
        {
                //printf("%c",a[i]);


                if(*(ptr+i) ==' ' || *(ptr+i) =='\0')
                {
			
                        temp[k]='\0';
			//printf("\nword is :%s",temp);
			x=0;
			while(temp[x] != '\0' && search[x] !='\0')
			{
				
				//printf("\n%c\t%c",temp[x],search[x]);		
					
				if (search[x] == temp[x])
				{
				
					flag=TRUE;
				
				
				}
				else
					flag=FALSE;	
			x++;
			
			}

			if(flag==TRUE)
			{
				printf("Found");
				
				for(j=0;replace[j] != '\0';j++)
				{
					//printf("\ny");
						
					original[y]=replace[j];
					printf("\ncy is :%c",original[y]);
					y++;
					
				}
			
			}

			else
			{

				
				for(j=0;temp[j] != '\0';j++)
				{
					
					original[y]=temp[j];
				//	printf("\nn");
					y++;
				}
				
			
			
			
			}
			
			k=-1;
			
                }
                else
                {
			flag=TRUE;
                        temp[k]=*(ptr+i);
 

                }
	}
	original[y]='\0';
	//printf("\ni am here");
	//printf("\nThe value of y is %hhd",y);
	printf(" \n---%s \n",original);
	for(y=0;original[y] !='\0';y++)
		printf("%c",original[y]);
	




		
        
}
