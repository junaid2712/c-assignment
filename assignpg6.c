#include<stdio.h>
int main()
{
int n,i,res;
printf("enter the number: \n");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
res=n*i;
printf("%d x %d= %d\n",n,i,res);
}
return 0;

}

