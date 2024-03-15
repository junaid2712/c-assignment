#include<stdio.h>
   int main()
   {
   int a,b;
   here:
   printf("enter the two  number \n");
   scanf("%d %d",&a,&b);
     /* if(a>b)
          printf("given number %d is maximum\n",a);
      else
         printf("given number %d is maximum\n",b);
 */

(a>b)?printf("%d",a):printf("%d",b);

 goto here;

   
 return 0;
}
                                                                                                                                                                                                         
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                                                                    
