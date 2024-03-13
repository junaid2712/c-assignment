#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,n;
double peri,s,area;



printf("enter the values \n");
scanf("%d %d %d",&a,&b,&c);

peri=a+b+c;
 printf("perimeter=%g\n",peri);
 s=peri/2;

area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is %g\n",area);
return 0;
}











