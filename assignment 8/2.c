#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void add(int8_t a,int8_t b);
void sub(int8_t a,int8_t b);
void div1(int8_t a,int8_t b);
void mul(int8_t a,int8_t b);
int8_t result;
int main(int argc, char *argv[])
{
    int Cnt = argc;
    int8_t a=0,b=0,c=0,var1=0,var2=0;
    while(Cnt>0)
    {
       printf("Argument %d = %s\r\n",Cnt,argv[Cnt-1]);
   	Cnt--;     
    }
    

    a=*(argv[1]);
    b=*(argv[2]);
    c=*(argv[3]);

    printf("\n%hhd",a);
    printf("\n%hhd",b);
    printf("\n%hhd",c);

    var1= a-48;
    var2=c-48;
    printf("\na:%hhd",var1);

    if(b==43)
	    add(var1,var2);
    else if(b==42)
	    mul(var1,var2);
    else if(b==47)
	    div1(var1,var2);
    else
	    sub(var1,var2);
    

    return 0;
}


void add(int8_t a,int8_t b)
{
	result=a+b;
	printf("\n%hhd", result);
}
void sub(int8_t a,int8_t b)
{
	result=a-b;
	printf("\n%hhd",result);
}
void div1(int8_t a,int8_t b)
{
	result=a/b;
       printf("\n%hhd",result);
}
void mul(int8_t a,int8_t b)
{	result=a*b;
 	printf("\n%hhd",result);	
}

