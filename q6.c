/*Write a function & recursion that displays a positive integer in words.
     For ex: 
     if the integer is 3412 then it is displayed as three four one two.*/

#include<stdio.h>	
void display_positive_int(int);
void main()
{
	int num;

	printf("Enter a num:\n");
	scanf("%d",&num);

	if(!(num>>31&1))
		display_positive_int(num);
	else
		printf("No. is negative.\n");
	printf("\n");	
}
void display_positive_int(int num)
{
	static int s=0;
	int r;
			
	if(num)	
	{
		r=num%10;
		display_positive_int(num/10);
		{
			switch(r)
			{
				case 1:printf("One ");
					break;
				case 2:printf("Two ");
					break;
				case 3:printf("Three ");
					break;
				case 4:printf("Four ");
					break;
				case 5:printf("Five ");
					break;
				case 6:printf("Six ");
					break;
				case 7:printf("Seven ");
					break;
				case 8:printf("Eight ");
					break;
				case 9:printf("Nine ");
					break;
				case 0:printf("Zero ");
					break;
			}
		}	
	}
}
