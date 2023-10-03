#include<stdio.h>
typedef char int8_t;
typedef int int32_t;
int32_t reverse(int32_t a);
int8_t float_count(float a);
int8_t int_count(int32_t a);
int main()
{


	int32_t var1,rev=0,main=0;
	float var,dec=0;
	int8_t chars[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"},check[10][5],rem=0,i=0,i_count=0,f_count=0,k=1,option;
	scanf("%hhd",&option);
	
	if(option =='A')
	{

		scanf("%f",&var);
		var1= (int)var;
	//printf("decimal part %d",var1);
		dec=var-var1;
	//printf("\nfirst fraction %f",dec);

		f_count=float_count(var);
		i_count=int_count(var1);
	

		for(i=0;i<f_count;i++)
		{
			//printf("\nc1:%f",dec);
			dec=dec*10;
		
		}

	//	printf("decimal part of flaot%f",dec);

	//for(i=0;i<10;i++)
	//{
	
	
	//	printf("%s\n",chars[i]);
	
	
	//}
	//
	
		rev=reverse(var1);

		while (rev != 0)
		{
			rem=rev%10;
			for(i=0;i<10;i++)
			{
	
				if (rem==i)
					printf("%s\t",chars[i]);
	
			}
			rev=rev/10;

		}	

		rev=reverse(dec);
		printf("point \t");

        	while (rev != 0)
        	{
                	rem=rev%10;
                for(i=0;i<10;i++)
                {

                        if (rem==i)
                                printf("%s\t",chars[i]);

                }
                rev=rev/10;

        }
	






	}

	 if(option == 'B')
	{
	
		printf("\nEnter the words ");

		for(i=0;i<5;i++)
		{
		
			scanf("%s",check[i]);
		
		
		
		
		}


		for(i=0;i<5;i++)
		{
		
		
		
			printf("%s",check[i]);
		
		
		}
	
	
	
	
	
	
	
	
	
	
	
	}
}

int32_t reverse(int32_t a)
{

	int32_t i=1,rem=0,num=0,b=0;
	int8_t count=0,k=0;
	//printf("size of the data is %d",sizeof(a));
	
	b=a;


	while(a != 0)
	{
	
		a=a/10;
		count++;
		//printf("%d\n",a);	
	
	}
	//printf("\nthe count value is %hhd",count);
	for(k=1;k<count;k++)
		i=i*10;

	rem=0;
	while(b != 0)
	{
	
		rem=b%10;
		num=(rem*i)+num;
		b=b/10;
		i=i/10;
	
	
	
	}

	return num;


}




int8_t float_count(float a)
{

	int8_t rem=0,count=0;
//	printf("\nc1%f",a/(int)(a));
	while((a/(int)a) != 1)
	{
		//printf("c:%f\n",(a/(int)a));	
		a=a*10;
		count++;
	
	}

	return count;

}



int8_t int_count(int32_t a)
{


	int8_t i=0;
	while(a !=0)
	{
	
		a=a/10;
		i++;
	
	
	}

	return i;




}








