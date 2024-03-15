#include<stdio.h>
   int main()
   {
   int num;
   here:
   printf("enter the number \n");
   scanf("%d",&num);
           if(num>0)
              {
            printf("given number %d is posiive\n",num);
            }
        else if(num<0)
            {
            printf("given number %d is negative\n",num);
            }
			else
			{
			printf("given number is zero\n");
			}
  goto here;
  return 0;
  }

