/**
 ****************************************************************************************
 *   @file          : p1.c
 *   @author        : Ahmed Ali
 *   @brief         : 
 *						Write a C program the implement 2 function:
 *						1- Function to get the maximum of 4 values
 *						2- Function to get the minimum of 4 values
 *						The program will ask the user first to enter the 4 values, 
 *						then print the maximum number and minimum number of them.
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End   **************************** */
/* ****************************** Macros Section Start ****************************** */
#define SUCCESS  0
#define F_ZERO   0.0
/* ****************************** Macros Section End   ****************************** */
/* ****************************** Global Declarations Section Start ***************** */
double max(double first_num, double second_num, double third_num, double fourth_num);
double min(double first_num, double second_num, double third_num, double fourth_num);
/* ****************************** Global Declarations Section End ***************** */

int main(void)
{
	double first_num, second_num, third_num, fourth_num, max_num, min_num;
	first_num = second_num = third_num = fourth_num = max_num = min_num = F_ZERO;
	
	printf("Enter four values: ");
	scanf("%lf %lf %lf %lf", &first_num, &second_num, &third_num, &fourth_num);
	
	max_num = max(first_num, second_num, third_num, fourth_num);
	min_num = min(first_num, second_num, third_num, fourth_num);
	
	printf("Maximum value is %lf\n", max_num);
	printf("Minimum value is %lf\n", min_num);
	
	return SUCCESS;
}

/* ****************************** Sub-Programs Section Start   ****************************** */

/**
 ****************************************************************************************
 *  @brief          : Get maximum of four values
 *  @param          : double (first_num,  second_num,  third_num, fourth_num)
 *  @return         : double
 ****************************************************************************************
*/

double max(double first_num, double second_num, double third_num, double fourth_num)
{
	double max = F_ZERO;
	max = (first_num > second_num && first_num > third_num && first_num > fourth_num) ?
                                   first_num :
                                     ((second_num > third_num && second_num > fourth_num) ?
                                                         second_num :
                                                          (third_num > fourth_num ? third_num : fourth_num));
	return max;
}

/**
 ****************************************************************************************
 *  @brief          : Get minimum of four values
 *  @param          : double (first_num,  second_num,  third_num, fourth_num)
 *  @return         : double
 ****************************************************************************************
*/

double min(double first_num, double second_num, double third_num, double fourth_num)
{
	double min = F_ZERO;
	min = (first_num < second_num && first_num < third_num && first_num < fourth_num) ?
                                   first_num :
                                     ((second_num < third_num && second_num < fourth_num) ?
                                                         second_num :
                                                          (third_num < fourth_num ? third_num : fourth_num));
	return min;
}

/* ****************************** Sub-Programs Section End   ****************************** */