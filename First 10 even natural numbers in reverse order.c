//7.Write a programme to print first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i=20;
	printf("The first 10 natural even numbers in reverse order are : ");
	for(i=20;i>=2;i=i-2)
	{
		printf("%d ",i);
	}
return 0;
}