/**
 ****************************************************************************************
 *   @file          : p3.c
 *   @author        : Ahmed Ali
 *   @brief         : C program to calculate the power using recursion.
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End   **************************** */
/* ****************************** Macros Section Start ****************************** */
#define SUCCESS  0
#define ONE      1
#define I_ZERO   0
#define F_ZERO   0.0
/* ****************************** Macros Section End   ****************************** */
/* ****************************** Global Declarations Section Start ***************** */
double power(double base, double exponent);
double fractional_power(double base,signed int integer_part,signed int fraction_part);
/* ****************************** Global Declarations Section End ***************** */

int main(void)
{
	double base, exponent, result;
	base = exponent = result = F_ZERO;
	
	printf("Enter base: ");
	scanf("%lf", &base);
	printf("Enter exponent: ");
	scanf("%lf", &exponent);
	
	if(exponent >= F_ZERO)
	{
		result = power(base,exponent);
	}
	else
	{
		result = ONE / power(base,exponent);
	}
	
	printf("%.2lf ^ %.2lf = %.4lf", base, exponent, result);
	return SUCCESS;
}

/* ****************************** Sub-Programs Section Start   ****************************** */

/**
 ****************************************************************************************
 *  @brief          : Calculate power using recursion.
 *  @param          : double (base,  exponent)
 *  @return         : double
 ****************************************************************************************
*/

double power(double base, double exponent)
{
	/*
		Note:
			This function will not working with fraction exponent.
			If you input fraction exponent, it will cause runtime error -1073741571.
			This runtime error means stack overflow (usually caused by infinite recursion. 
			This function will work if exponent is integer only, either positive or negative. 
	*/
	
		if(F_ZERO == exponent)
		{
			return ONE;
		}
		else
		{
			if(exponent > F_ZERO)
				return base * power(base,--exponent);
			else 
				return (base * power(base,++exponent));
		}
}

double fractional_power(double base,signed int integer_part,signed int fraction_part)
{
	/*
		my equation is: ((base)^(float)fraction_part)^integer_part
		fist part of equation (base^(float)fraction_part) eqavilant:
			10throot(base^(fractional_part*10))
		lets take example:
			if user input 2^2.5
			base = 2
			integer part of exponent = 2
			fractional part of exponent = 5
			----------------------------------------------
			2 ^ 2.5 = 5.65685424949
			2 ^ 2   = 4
			2 ^ 0.5 = 1.41421356237
			so (2^2) + (2^0.5) = 2^2.5 as we know (round).
		    ----------------------------------------------
			How can i get 10throot in C lang?
			I can get it using this eq: pow(number, 1.0/10);
			but i want not to use pow function in my program, so what?!
	*/
	//todo
	return F_ZERO;
}
/* ****************************** Sub-Programs Section End   ****************************** */