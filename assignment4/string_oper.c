#include<stdio.h>
typedef char int8_t;
typedef int int32_t;
int32_t ReverseString( int8_t *Rstr,int8_t sarr[15]);
int32_t StringLength(int8_t *lstr);
int32_t clrBuffer(int8_t *Str, int32_t Size);
int8_t *StrConcatenate(int8_t *Str1,int8_t *Str2);
int32_t SetBuffer(int8_t *Src,int8_t *Dest);
#define TRUE 0
int8_t result[30];
		
int main()
{


	int8_t string[15],check=-1,rev_string[15],option,size=0,str_con[15],string2[15];
	int8_t *ptr_str, *rev_str, *ptr_con;
	ptr_str=string;
	rev_str=rev_string;
	ptr_con=str_con;


	printf("Enter A to reverse the string :"
			"\nEnter B to find the length of the string"
			"\nEnter C to clear the buffer of the string"
			"\nEnter D to Concatente 2 strings"
			"\nEnter E to copy the string"
			"\nEner Q to Quit");
	scanf("%c",&option);

	while ( option !='Q')
	{

	if (option == 'A')
	{

		printf("Enter the string to reverse to string :");
		scanf("%s",ptr_str);
		//printf("\n The length of the string is %d",StringLength(ptr_str));
		ReverseString(rev_str,string);
	}
	
	else if (option == 'B')
	{
	
		printf("\nEnter the string to find the length : ");
		scanf("%s",ptr_str);

		printf("\nThe size of the string is %d",StringLength(ptr_str));
	
	}
	else if (option == 'C')
	{
	
		printf("\nEnter the  the string to make 0 ");
		scanf("%s",ptr_str);
		size=StringLength(ptr_str);
		check=clrBuffer(ptr_str,size);
		if (check==0)
		{
			printf("\nSucess !!!!!");

		
		}
		else
		{
		
			printf("\nfailed operation!!!!");
		}


	
	
	}

	else if (option =='D')
	{
	
		printf("Enter the first string :");
		scanf("%s",string);
		printf("\nEnter the second string :");
		scanf("%s",string2);
		ptr_con=StrConcatenate(string,string2);
		printf("\n%s",ptr_con);
	
	
	}

	else if (option =='E')
	{
	
	
		printf("Enter the charceters ");
		scanf("%s",ptr_str);
		printf("The numbere of characters copied is %d",SetBuffer(ptr_str,string2));
	
	
	}
	printf("\nEnter the option again for continue");
	scanf(" %c",&option);
	}

}

int32_t ReverseString(int8_t *Rstr,int8_t sarr[15])
{


	int size=0,i=0,j=0;
	size=StringLength(sarr);
	printf("The size of the string is %d",size);
	for(i=0,j=size-1;j>=0;i++,j--)
	{
	
		Rstr[i]=sarr[j];


	
	
	}
	Rstr[i]='\0';

	printf("\nRevered string is %s",Rstr);
	
	return size;






}

int32_t StringLength(int8_t *lstr)
{

	int count=0,i=0;
	for(i=0;lstr[i] != '\0';i++)
	{
		count=count+1;
	
	}
	
	return count;


}


int32_t clrBuffer(int8_t *Str, int32_t Size)
{


	int i=0,flag=-1;
	for(i=0;Str[i] != '\0';i++)
	{
	
		Str[i]=0;
		flag=TRUE;
	
	}

	return flag;




}

int8_t *StrConcatenate(int8_t *Str1,int8_t *Str2)
{

	int8_t i=0,size1=0,size2=0,j=0;
	size1=StringLength(Str1);
	size2=StringLength(Str2);
	for(i=0;i<size1;i++)
	{
		result[i]=Str1[i];
	
	}
	for(j=0;j<size2;j++,i++)
	{
	
		result[i]=Str2[j];
	}

	result[i]='\0';
	
	return (&result);


}

int32_t SetBuffer(int8_t *Src,int8_t *Dest)
{

	int8_t size1=0,i=0,count=0;
	size1=StringLength(Src);
	for(i=0;Src[i] != '\0';i++)
	{
	
		Dest[i]=Src[i];
		count=count+1;
	
	}
	Dest[i]='\0';
	
	return count;


}
