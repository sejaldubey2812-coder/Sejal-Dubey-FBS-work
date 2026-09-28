#include<stdio.h>
void main()
{
	int no=123,a,b,c,d,f,e,g,h;
	a=no%10;
	b=no/10;
	c=b%10;
	d=b/10;
	e=a*100;
	f=c*10;
	g=d*1;
	h=e+f+g;
	if(no==h)
	{
		printf("%d is palindrome",no);
	}
	else
	{
			printf("%d is not palindrome",no);
	}
}