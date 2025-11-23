#include<stdio.h>
main()
{
	int i,j;
	printf("enter a value of i");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("%d",j);
}