//10.Write a program to print a table of 5
#include<stdio.h>
int main()
{
	int i=1,j;
	printf("The table of 5 is:\n");
	while(i<=10)
	{
		j=5*i;
		printf("5 X %d =%d\n",i,j);
		i++;
	}
return 0;
}