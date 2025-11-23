#include<stdio.h>
int main(){
	int a,b,sum;
	float avg;
	printf("enter two integer:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	avg=sum/2.0;
	printf("sum=%d\n",sum);
	printf("average=%2f\n",avg);
	return 0;
}