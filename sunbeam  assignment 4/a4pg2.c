//Write a function to calculate power

#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0)
	{
        for (int i = 0; i < exponent; i++) 
		{
            result *= base;
       	}
    } else 
	    {
        for (int i = 0; i > exponent; i--)
		 {
            result /= base;
         }
        }  

    return result;
}

int main()
{
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, power(base, exponent));

    return 0;
}
