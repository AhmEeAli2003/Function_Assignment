/**
 ****************************************************************************************
 *   @file          : p2.c
 *   @author        : Ahmed Ali
 *   @brief         : write a simple calculator with c function.
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************************** Includes Section End   **************************** */
/* ****************************** Macros Section Start ****************************** */
#define SUCCESS  0
#define I_ZERO   0
#define F_ZERO   0.0
/* ****************************** Macros Section End   ****************************** */
/* ****************************** Global Declarations Section Start ***************** */
double calc(double first_num, double second_num, unsigned char operator);
/* ****************************** Global Declarations Section End ***************** */

int main(void)
{
	double first_num, second_num, result;
	unsigned char operator = I_ZERO;
	first_num = second_num = result = F_ZERO;
	
	printf("Enter two values: ");
	scanf("%lf %lf", &first_num, &second_num);
	fflush(stdin);
	printf("Enter operator [+,-,*,/]: ");
	scanf("%c", &operator);
	
	
	result = calc(first_num,second_num,operator);
	printf("%.2lf %c %.2lf = %.2lf\n", first_num, operator, second_num, result);
	return SUCCESS;
}

/* ****************************** Sub-Programs Section Start   ****************************** */

/**
 ****************************************************************************************
 *  @brief          : Simple Calculator
 *  @param          : double (first_num,  second_num), unsigned char operator
 *  @return         : double
 ****************************************************************************************
*/

double calc(double first_num, double second_num, unsigned char operator)
{
	/* No need to using break with return */
	switch(operator)
	{
		case '+': return first_num + second_num;
		case '-': return first_num - second_num;
		case '*': return first_num * second_num;
		case '/': 
				if(F_ZERO == second_num)
				{
					printf("Can't divided by zero!");
					exit(-1); /* This number to know exit point */
				}
				else
				{
					return first_num / second_num;
				}
		default:
				printf("Invalid Operator!");
				exit(-2); /* This number to know exit point */
	}
	/*
		Q: How to know exit point?
		A: In CodeBlocks exit point number shows in message after end of execution.
		   In cmd we can know it using: echo %errorlevel% after end of execution.
		   This is base in all programs. you can know runtime error cause by its number
		   using these methods.
		   Thanks,
	
	*/
}


/* ****************************** Sub-Programs Section End   ****************************** */