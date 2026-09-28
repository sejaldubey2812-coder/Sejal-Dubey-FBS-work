#include<stdio.h>
void main()
{
	int p=400;
	char ch='y';
	if(ch=='y' && p>=500)
	{
		printf("You got 20 percent discount \n");
		int d=p-(p*20/100);
		printf("Your price after discount is %d",d);
	}
	else if(ch=='y' && p<=500)
	{
		printf("You got 10 percent  discount\n");
		int d=p-(p*10/100);
		printf("Your price after discount is %d",d);
	}
	 else if(ch=='n' && p>=600)
	{
		printf("You got 15 percent  discount\n");
		int d=p-(p*15/100);
		printf("Your price after discount is %d",d);
	}
	else
	{
		printf("You got no discount");
	}
}  