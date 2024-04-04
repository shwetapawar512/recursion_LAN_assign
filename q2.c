//Write a function & recursion to print the 'n'  fibonacci series numbers.

#include<stdio.h>
#include<unistd.h>
void fibo(int,int,int);
void main()
{
	int n1,n2,n;

	printf("Enter n:\n");
	scanf("%d",&n);
	
	printf("enter n1 and n2:\n");
	scanf("%d\n%d",&n1,&n2);
	fibo(n1,n2,n);
	
}
void fibo(int n1,int n2,int n)
{
	int n3=0;
	static int c=2;

	if(c>=n)
		return;
	
	n3=n1+n2;
	sleep(1);
	printf("%d\n",n3);
	c++;
	n1=n2;
	n2=n3;
	fibo(n1,n2,n);
	

}
