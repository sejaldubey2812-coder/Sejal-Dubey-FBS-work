void main()
{
	int no=30;
	if(no%3==0 && no%5==0)
	printf("Number is divisible by both 3 and 5");
	else if(no%3==0 && no%5!=0)
	printf("Number is divisible by 3 only");
	else if(no%5==0 && no%3!=0)
	printf("Number is divisible by 5 only");
}