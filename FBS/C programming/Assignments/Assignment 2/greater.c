#include<stdio.h>
void main()
{
	int a=100,b=90,c=30;
	if(a>b)
	  if(a>c)
    	printf("a is greater");
    	else
               printf("c is greater");
	      else if(b>a)
	              if(b>c)
                    printf("b is greater");
               else
               printf("c is greater");
       }
