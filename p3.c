/**
 ****************************************************************************************
 *   @file          : p3.c
 *   @author        : Ahmed Ali
 *   @brief         : Write C code implement a function to swap 2 variable.
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
void swap(double *first_num, double *second_num);
/* ****************************** Global Declarations Section End ***************** */

int main(void)
{
	double first_num, second_num;
	first_num = second_num = F_ZERO;
	
	printf("Enter two values: ");
	scanf("%lf %lf", &first_num, &second_num);
	printf("Before Swapping\n");
	printf("\tFirst = %.2lf\n", first_num);
	printf("\tSecond = %.2lf\n", second_num);
	
	swap(&first_num,&second_num);
	
	printf("After Swapping\n");
	printf("\tFirst = %.2lf\n", first_num);
	printf("\tSecond = %.2lf\n", second_num);
	return SUCCESS;
}

/* ****************************** Sub-Programs Section Start   ****************************** */

/**
 ****************************************************************************************
 *  @brief          : Swap two variables.
 *  @param          : double* (first_num,  second_num)
 *  @return         : void
 ****************************************************************************************
*/

void swap(double *first_num, double *second_num)
{
	double temp = *first_num;
	*first_num  = *second_num;
	*second_num = temp;
}


/* ****************************** Sub-Programs Section End   ****************************** */