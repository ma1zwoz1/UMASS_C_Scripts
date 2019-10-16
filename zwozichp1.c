/*******************************************************************************************************
Title: PROGRAMMING ASSIGNMENT #1
Name: Zachary Wozich
Description:
Write a C program that calculates and prints the sum, difference, product,
quotient, and remainder (modulus) of two integer numbers. You will use two
numbers different from the numbers that I use. One of the statements in your
program should be the following, but with different numbers (do not use zero for
either number)
***********************************************************************************************************/

#include <stdio.h>

int main(void)
{

 	/* Declare integer variables used for arithmetic */
	int num1 = 59, num2 = 24, sum, diff, prod, quot, mod;
	
	/* Prints two the default numbers used  */
	printf("The two numbers used by this program are 59 and 24.\n\n");
	
	/* Calculates Sum */
	sum = num1 + num2; 
	
	/* Calculates Difference */
	diff = num1 - num2; 
	
	/* Calculates Product */
	prod = num1 * num2; 
	
	/* Calculates Quotient */
	quot = num1 / num2; 
	
	/* Calculates Modulus */
	mod = num1 % num2;
	
	/* Prints Output Results*/
	
	printf("The sum is %d \n", sum); /* Prints Sum , %d - Take the next argument and print it as an int*/
	printf("The difference is %d \n", diff); /* Prints Difference , %d - Take the next argument and print it as an int*/
	printf("The product is %d \n", prod); /* Prints Product , %d - Take the next argument and print it as an int*/
	printf("The quotient is %d ", quot); /* Prints Quotient with Modulus , %d - Take the next argument and print it as an int*/
	printf("with a remainder of %d \n\n", mod); /* Prints Quotient with Modulus , %d - Take the next argument and print it as an int*/
	printf("Thank you for using the program.\n"); /*  Thank you */
	
	return (0); /* indicates successful completion */
}
