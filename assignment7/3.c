#include <stdio.h>
#include <stdlib.h>
typedef unsigned char uint8_t;
uint8_t check[10],ch[10];
FILE *fptr,*tptr;
uint8_t Word_count();
uint8_t delete_word();
uint8_t replace_word();
int main() {
	uint8_t choice=0;
    	fptr=fopen("TestFile.txt","r");
	//tptr=fopen("Temp.txt","a+");
	while(choice!='Q')
	{
		printf("\nC:count\nR:replace\nD:Delete\nQ:Quit\n");
		scanf(" %c",&choice);
		if(choice=='C')
		{
			Word_count();
		}
		else if(choice=='D')
		{
			delete_word();
		}
		else if(choice=='R')
		{
			replace_word();
		}
		else if(choice=='Q')
		{
			fclose(fptr);
			break;
		}
		else
		{
			printf("\nInvalid");
		}
	}
    	return 0;
}
uint8_t Word_count()
{
	uint8_t i=0,flag=0,wordcount=0;
	rewind(fptr);
	printf("\nEnter the word to count");
        scanf("%s",check);
        while((fscanf(fptr,"%s",ch))!=EOF)
        {
		flag=0,i=0;
		//printf("%s",ch);
		while(ch[i]!='\0' && check[i]!='\0')
		{
			if(ch[i]!=check[i])
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag==0)
		{
			wordcount++;
		}
        }
        printf("\nNo of words =%hhd",wordcount);

}
uint8_t delete_word()
{
	tptr=fopen("temp.txt","w");
	fprintf(tptr," ");
	fclose(tptr);
	tptr=fopen("temp.txt","a+");
	uint8_t i=0,flag=0;
	rewind(fptr);
	printf("\nEnter the word to delete");
	scanf("%s",check);
        while((fscanf(fptr,"%s",ch))!=EOF)
        {
                flag=0,i=0;
                //printf("%s",ch);
                while(ch[i]!='\0' && check[i]!='\0')
                {
                        if(ch[i]!=check[i])
                        {
                                flag=1;
                                break;
                        }
                        i++;
                }
                if(flag==0)
                {
                        //nothing
                }
		else
		{
			fprintf(tptr,"%s",ch);
			fprintf(tptr," ");
		}
        }
	fclose(tptr);
}
uint8_t replace_word()
{
        tptr=fopen("temp.txt","w");
        fprintf(tptr," ");
        fclose(tptr);
        tptr=fopen("temp.txt","a+");
        uint8_t i=0,flag=0,re[30];
        rewind(fptr);
        printf("\nEnter the word to delete");
        scanf("%s",check);
	printf("\nEnter the word to replace");
	scanf("%s",re);
        while((fscanf(fptr,"%s",ch))!=EOF)
        {
                flag=0,i=0;
                //printf("%s",ch);
                while(ch[i]!='\0' && check[i]!='\0')
                {
                        if(ch[i]!=check[i])
                        {
                                flag=1;
                                break;
                        }
                        i++;
                }
                if(flag==0)
                {
                        fprintf(tptr,"%s",re);
			fprintf(tptr," ");
                }
                else
                {
                        fprintf(tptr,"%s",ch);
                        fprintf(tptr," ");
                }
        }
        fclose(tptr);
}


