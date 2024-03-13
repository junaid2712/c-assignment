#include<stdio.h>
int main()
{
	int a, b, sum,diff,prod,div;
	printf("enter the numbers a & b \n");
	scanf("%d %d", &a, &b);
	sum=a+b;
	printf("sum of two numbers is %d\n",sum);

        diff=a-b;
	printf("diff of two numbers is %d\n",diff);


	prod=a*b;
	printf("prod of two numbers is %d\n",prod);
	
	div=a/b;
	printf("div of two numbers is %d\n",div);
	return 0;
}

