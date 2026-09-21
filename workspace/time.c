#include<stdio.h>
void main()
{
	int min=130, hrs,r;
	hrs=min/60;
	printf("Hours is %d \n",hrs);
	r=min-(hrs*60);
	printf("Remaining minutes are %d \n",r);
	printf("So time is %d hours %d minutes",hrs,r);
}