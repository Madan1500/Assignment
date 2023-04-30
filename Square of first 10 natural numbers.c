//8.Write a program to print square of first 10 natural numbers
#include<stdio.h>
int main()
{
	int i=1,j;
	printf("The square of first 10 natural numbers are : ");
	while(i<=10)
	{
		j=i*i;
		printf("%d ",j);
		i++;
	}
return 0;
}