#include<stdio.h>
typedef int int32_t;
int main()
{

	int32_t var1,var2;
	int32_t *ptr1=&var1,*ptr2=&var2;
	printf("Enter the first value :\n");
	scanf("%d",ptr1);
	printf("Enter the second value :\n");
	scanf("%d",ptr2);
	printf("Displaying the values after the swapping!!!!\n");

	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;

	printf("the first value afer swapping is %d\n",*ptr1);
	printf("The second value after the swapping is %d\n",*ptr2);
	

}
