#include<stdio.h>
int main()
{
int num1,num2,num3,max_num;
printf("enter the digits: \n");
scanf("%d %d %d",&num1,&num2,&num3);
/*  Using conditional operator to find the maximum
    max_num = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);
	printf("maximum number is %d\n",max_num);*/

	if(num1>num2 || num1>num3)
	printf("%d is maximum\n",num1);
	else if(num3>num1 || num3> num2)
	printf("%d is maximum\n",num3);

	else
	printf("%d is maximum\n",num2);
return 0;
	}

