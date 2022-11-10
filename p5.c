/**
 ****************************************************************************************
 *   @file          : p5.c
 *   @author        : Ahmed Ali
 *   @brief         :   Write a program in C to convert decimal number to 
 *						binary number using the function  
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End   **************************** */
/* ****************************** Macros Section Start ****************************** */
#define SUCCESS  0
#define ZERO     0
#define FACTOR   2
/* ****************************** Macros Section End   ****************************** */
/* ****************************** Global Declarations Section Start ***************** */
void decimalToBinary(unsigned int number);
/* ****************************** Global Declarations Section End ***************** */

int main(void)
{
	unsigned int number = ZERO;
	printf("Enter number: ");
	scanf("%d", &number);
	decimalToBinary(number);
	return SUCCESS;
}

/* ****************************** Sub-Programs Section Start   ****************************** */

/**
 ****************************************************************************************
 *  @brief          : Convert decimal to binary.
 *  @param          : unsigned int number
 *  @return         : void
 ****************************************************************************************
*/

void decimalToBinary(unsigned int number)
{
	/*
		Working with floating point number - which is the decimal number too - has
		other methods.
		This function working with integers number only.
	*/
	if(number > ZERO)
	{
		decimalToBinary(number/FACTOR);
		printf("%d",number%FACTOR);
	}
	
}


/* ****************************** Sub-Programs Section End   ****************************** */