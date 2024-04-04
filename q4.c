//Write a function & recursion to revese the given number.

#include<stdio.h>
int rev(int);
void main()
{
	int num,result;
	printf("Enter num:\n");
	scanf("%d",&num);

	result=rev(num);
	printf("Reversed no: %d\n",result);
}
int rev(int num)
{
	static int s=0;
	int r;
	
	if(num>0)
	{
		r=num%10;
		s=s*10+r;
		rev(num/10);
	}
	if(num==0)
		return s;

}
