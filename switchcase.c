#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter the operator(+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
			printf("the sum is %d",n1+n2);
			break;
		case '-':
			printf("the dif is %d",n1-n2);
			break;
		case '*':
			printf("the mul is %d",n1*n2);
			break;
		case '/':
			printf("the divi is %d",n1/n2);
			break;
		case '%':
			printf("the mod is %d",n1%n2);
			break;
		default:
			printf("invalid output");
								
	}
}
