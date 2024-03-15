#include<stdio.h>
int main()
{
int num;
here:
printf("enter the number \n");
scanf("%d",num);
     if(num%2==0)
	 	{
   		printf("given number %d is even\n",num);
		}
	else
		{
		printf("given number %d is odd\n",num);
		}
goto here;
 return 0;











}
