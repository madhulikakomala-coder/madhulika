#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	while(b!=0);
	int carry=a&b;
	a=a^b;
	b=carry<<1;
printf("sum=%d\n",a);
return 0;
}