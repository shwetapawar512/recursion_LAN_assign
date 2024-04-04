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
int fact(int i)
{
	//int i;
	//static int mul=1;

	if(i)
		return i*fact(--i);	
	return 1;

	//mul=mul*i;

}
