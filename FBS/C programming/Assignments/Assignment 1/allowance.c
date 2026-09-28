#include<stdio.h>
void main()
{
	int basic=90000,da,ta,hra;
	if(basic<=5000)
	{
	     da=(basic*10)/100;
		ta=(basic*20)/100;
		 hra=(basic*25)/100;
		printf("Dearness allowance is %d \n",da);
		printf("Travel allowance is %d \n",ta);
		printf("House rent allowance is %d",hra);
	}
	else
	{
		 da=(basic*15)/100;
		 ta=(basic*25)/100;
		 hra=(basic*30)/100;
		printf("Dearness allowance is %d \n",da);
		printf("Travel allowance is %d \n",ta);
		printf("House rent allowance is %d",hra);
	}
}