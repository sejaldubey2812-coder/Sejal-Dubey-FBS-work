#include<stdio.h>
void main()

{
	int no1=20,no2=0;
	char op='/';
	if(op=='+')
	{
		int r=no1+no2;
		printf("Addition is %d + %d=%d",no1,no2,r);
	}
	else if(op=='-')
	{
		int r=no1-no2;
		printf("Substraction is %d - %d=%d",no1,no2,r);
	}
	else if(op=='*')
	{
			int r=no1*no2;
		printf("Multiplication is %d * %d=%d",no1,no2,r);
	}
     else if(op=='/')
     {
     if(no2==0)
     {
     	printf("Cant divide operand two is 0");
	 }
	 else
	 {
	 	
	 }
	 int r=no1/no2;
		printf("Quotient is %d",r);
	
	  }
     else if(op=='%')
     {
     	if(no2==0)
     	{
     		printf("Cant divide operand two is 0");
		 }
		 else
		 {
		 	int r=no1%no2;
		printf("Remainder is %d",r);
		 }
	 }
     	
}