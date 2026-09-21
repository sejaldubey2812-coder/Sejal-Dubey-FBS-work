#include<stdio.h>
void main()
{
	int no1=66,no2=27,s;
	printf("no1 is %d \n",no1);
	printf("no2 is %d \n",no2);
	s=no1+no2;
	no2=s-no2;
	no1=s-no2;
	printf("After Swapping \n");
	printf("no1 is %d \n",no1);
	printf("no2 is %d",no2);
}