#include<stdio.h>
void main()
{
float s1=55,s2=65,s3=89,s4=90,s5=56,obt,total=500,p;
printf("Marks of subject one is %f \n",s1);
printf("Marks of subject two is %f \n",s2);
printf("Marks of subject three is %f \n",s3);
printf("Marks of subject four is %f \n",s4);
printf("Marks of subject five is %f \n",s5);
obt=s1+s2+s3+s4+s5;
printf("Total marks obtained is %f \n",obt);
p=(obt/total)*100;
printf("Percentage is %f",p);
}