//Write a function & recursion to find the sum of digits of a given number.

#include<stdio.h>
int sum_digit(int);
void main()
{
	int num,sum;

	printf("Enter num:\n");
	scanf("%d",&num);
	
	sum=sum_digit(num);
	printf("sum of digits of a given no: %d\n",sum);
}
int sum_digit(int num)
{
	int r;
	static int s=0;

	//logic 1:
	/*
	if(num>0)
	{	
	r=num%10;
	s=s+r;
	sum_digit(num/10);
	}

	if(num==0)
		return s;
	*/
	
	//logic 2:
	if(!num)
		return 0;
	if(num)
		return (num%10)+sum_digit(num/10);
}

