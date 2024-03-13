#include<stdio.h>
int main()
{
int a,b,c,d,n,rev=0,temp,rem;
printf("enter the n: \n");
scanf("%d",&n);

temp=n;
a=temp%10;
temp=temp/10;

b=temp%10;
temp=temp/10;


c=temp%10;
temp=temp/10;


d=temp%10;
temp=temp/10;
printf("%d %d %d %d\n",d,c,b,a);

temp=n;
while(temp!=0){
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;}
printf("rev=%d\n",rev);
 printf("%d = %d +  %d + %d + %d\n",n,d*1000,c*100,b*10,a*1); 

return 0;
}


