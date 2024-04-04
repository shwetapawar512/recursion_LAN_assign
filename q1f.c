#include<stdio.h>
int fact(int);
void main()
{
	int num,r;
	printf("Enter a num:\n");
	scanf("%d",&num);

	r=fact(num);

	printf("Factorial of %d is %d\n",num,r);
}
int fact(int num)
{
	int i,fact=1,s=0;

	for(i=num;i>0;i--)
		fact=fact*i;
		s=s+fact;
	return s;	
}
