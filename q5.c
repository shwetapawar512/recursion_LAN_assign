/*Write a function & recursion to that displays all the proper divisors of a given number exept that and returns their sum.
	Ex: 1,3,5,9,15 & 45 are the proper divisors of 45.
	        sum = 1+3+5+9+15
		      = 33            */

#include<stdio.h>	
int num;
int divisor_sum(int);
void main()
{
	int i,result;
	printf("Enter num:\n");
	scanf("%d",&num);
	
	printf("Proper divisors of %d are: ",num);
	result=divisor_sum(1);

	printf("\nsum=%d\n",result);
}
int divisor_sum(int i)
{
	static int s=0;
	if(i>=num)
		return s;
			
	if(num%i==0)
	{
		printf("%d ",i);
		s=s+i;
		divisor_sum(i+1);
	}	
	else
		divisor_sum(i+1);
			
}
