/*******************************************************************************************************
Title: PROGRAMMING ASSIGNMENT #5
Name: Zachary Wozich
Description:

Your program is to behave in the exact same manner as assignment #4, however how you
structure your code is a different story.
Now we will use functions.

Here is the change for program #5:
There should be at least two non-trivial functions in the program. (Non-trivial means that
the function does more than simply print a line of text.)
Here are some examples of what you might want to use for your functions:
Input functions:
1. Obtain opening (current) balance. ###### This is what I chose -ZW
2. Obtain number the number of deposits. ###### This is what I chose -ZW

Write a C program that allows the user to make some simple banking
transactions.
The program should first prompt the user to enter the current balance of his/her
bank account (in dollars and cents, not less than zero). The program should then
prompt the user to enter the number of withdrawals to make, and then the
number of deposits to make.
For this assignment, let's set a macounterimum of 5 deposits and 5 withdrawals,
you'll see why as you read on.
Using a loop, the program should then prompt the user to enter the amount of
the first deposit (a positive amount to add to the bank account balance), the
amount of the second deposit, the third, etc., until the number of deposits have
been processed.
Using a second loop, the program should then prompt the user to enter the
amount of the first withdrawal (a positive amount to subtract from the bank
account balance, if possible), the amount of the second withdrawal, the third,
etc. until the number of withdrawals have been processed.
Once all deposits and withdrawals have been made, the program should output
the ending balance.
The dialog with the user should look like the following:
Welcome to the Computer Banking System
Enter your current balance in dollars and cents: 256.40
Enter the number of deposits (0 - 5): 3
Enter the number of withdrawals (0 - 5): 2
Enter the amount of deposit #1: 10.50
Enter the amount of deposit #2: 12.25
Enter the amount of deposit #3: 125.30
Enter the amount of withdrawal #1: 120.35
Enter the amount of withdrawal #2: 35.60
*** The closing balance is $248.50 ***
The program should also output one of the following messages based on the
closing balance. That is:
? If the closing balance is greater than or equal to 50000.00, output:
 "*** It is time to invest some money! ***"
? If the closing balance is between 15000.00 and 49999.99, output:
 "*** Maybe you should consider a CD. ***"
? If the closing balance is between 1000.00 and 14999.99, output:
 "*** Keep up the good work! ***"
? If the closing balance is between 0.00 and 999.99, output:
 "*** Your balance is getting low! ***"
So, in the above ecounterample, the last line of sample output would be:
*** Your balance is getting low! ***
Regarding error checking on all user input, the following 5 error checks (on user
input) should be included in your program:
1. Ensure that the starting (current) balance is a positive number. If not, the
following error message should be displayed:
*** Beginning balance must be at least zero, please re-enter.
2. Ensure that the number of deposits is between 0 and 5. If not, the following
error message should be displayed:
*** Invalid number of deposits, please re-enter.
3. Ensure that the number of withdrawals is between 0 and 5. If not, the following
error message should be displayed:
*** Invalid number of withdrawals, please re-enter.
4. Ensure that the deposit amount is equal to or greater than zero. If not, the
following error message should be displayed:
*** Deposit amount must be greater than zero, please re-enter.
5. Ensure that the withdrawal amount does not ecounterceed the current balance
(including the new deposits). If so, the following error message should be
displayed:
*** Withdrawal amount ecounterceeds current balance.
So, for ecounterample, a sample run of the program with error checking might look
like:
Enter current balance in dollars and cents: -56.40
*** Beginning balance must be at least zero, please re-enter.
Enter current balance in dollars and cents: 256.40
Enter the number of deposits (0 - 5): -3
*** Invalid number of deposits, please re-enter.
Enter the number of deposits: 3
Enter the number of withdrawals (0 - 5): 2
Enter the amount of deposit #1: 10.50
Enter the amount of deposit #2: -12.25
*** Deposit amount must be greater than zero, please re-enter.
Enter the amount of deposit #2: 12.25
Enter the amount of deposit #3: 125.30
Enter the amount of withdrawal #1: 5000.00
*** Withdrawal amount ecounterceeds current balance, please re-enter.
Enter the amount of withdrawal #1: 120.35
Enter the amount of withdrawal #2: 35.60
*** The closing balance is $248.50 ***
*** Your balance is getting low! ***

***********************************************************************************************************/

#include <stdio.h>

/* Start Functions */

/* Funtion to get current balance loop*/

float function_current_balance()
{
	float current_balance = 0;
	do {
 		/* Prompts the user to enter current balance*/
		printf ("Enter your current balance in dollars and cents: ");
		scanf ("%f",&current_balance);
		fflush(stdin);

		/* an error is display of the current balance is less than 0 dollars*/
		if (current_balance < 0){
		printf ("*** Beginning balance must be at least zero, please re-enter.\n\n");
		}
 	} while (current_balance < 0);

  return current_balance;
}

/* Funtion for deposit loop */

float function_number_deposits ()
{
	int number_deposits = 0;

	do
		{
			/* prompts the user to enter the number of deposits*/
			printf ("\nEnter the number of deposits(0-5): ");
			scanf ("%i",&number_deposits); /* enter deposits */
			fflush (stdin); /* flush input buffer */

				/* loop ensuring number of deposites does not exceed 5 */
				if (number_deposits < 0 || number_deposits > 5){
				printf ("*** Invalid number of deposits, please re-enter");
				}

		} while (number_deposits < 0 || number_deposits > 5);
     
  return number_deposits;
}

/* End of Functions */

int main(void)
{
	
/* Declaration of Variables */

int counter, number_of_deposits, number_of_withdrawals; /* integars for number of deposits, number of withdrawals, and counter used in loops */

float deposits[5], withdrawals[5]; /* float for deposits and withdrawals and declaration of arrays*/ 

float current_balance, balance; /* float for current balance and closing balance */ 

float total_deposits = 0, total_withdrawals = 0; /* float for total deposits and withdrawls */ 
 
printf ("Welcome to the Computer Banking System\n\n"); /* Welcome message */ 

/* Call current balance function */
current_balance = function_current_balance();

/* Call number of deposits function */
number_of_deposits = function_number_deposits();

/* withdrawal loop */


	do
		{
			/* Prompts the user to enter amount of withdrawals*/
			printf ("\nEnter the number of withdrawals(0-5): ");
			scanf ("%i",&number_of_withdrawals); /* enter withdrawals */
			printf ("\n");
			fflush (stdin);/* flush input buffer */

			/* loop starts with a display of an error message is amount is less than 0 or over 5*/
			if ( number_of_withdrawals < 0 || number_of_withdrawals > 5){
			printf ("*** Invalid number of withdrawals, please re-enter.\n\n");
			}

		}

/* Condition if the amount is not between 0 and 5 */
while (number_of_withdrawals < 0 || number_of_withdrawals > 5);

/* For loop increments deposits entered and ensures positive amount*/
	for (counter = 1; counter <= number_of_deposits; counter++)
		{
      		do
				{
				/* Prompt to enter amount of deposits*/
				printf ("Enter the amount of deposit #%i: ", counter);
				scanf ("%f",&deposits[counter]);
				fflush (stdin);

					/* Error if deposite is not greater than zero*/
					if (deposits[counter] <= 0){
					printf ("*** Deposit amount must be greater than zero, please re-enter.\n\n");
					}

				}
				/* While statement to restart for loop */
				while (deposits[counter] <= 0);

				/* Total deposits calculation */
				total_deposits = total_deposits + deposits[counter];
				
	/*end for loop*/
	}

printf ("\n");

/* For loop for withdrawals*/
for (counter = 1; counter <= number_of_withdrawals; counter++)
	{
		do
			{
				/* Prompts the user to enter amount of withdrawal*/
				printf ("Enter the amount of withdrawal #%i: ", counter);
				scanf ("%f",&withdrawals[counter]);
				fflush (stdin);

					/* error if withdrawal amount is greater than the balance*/
					if (withdrawals[counter] > (current_balance + total_deposits)){
					printf ("*** Withdrawal amount exceeds current balance, please re-enter.\n\n");
					}
					
					/* error if withdrawal amount is a negitive amount*/
					else if (withdrawals[counter] <= 0){
					printf ("*** Withdrawal amount must be greater than zero. Please re-enter! ***\n\n");	
					}

				}
				/* Loop ending when amount is greater balance or withdrawals counter is less than zero */
				while (withdrawals[counter] > (current_balance + total_deposits) || withdrawals[counter] <= 0);

				/* Total Withdrawls Calculation*/
				total_withdrawals = total_withdrawals + withdrawals[counter];


				/* Calculates balance with logic to ensure withdrawal is less than the balance*/
				balance = current_balance - total_withdrawals + total_deposits;

				if (balance == 0){
				/* Error if withdrawal requests and balance is zero*/
				printf ("\n *** Balance is now zero. No more withdrawals can be made at this time. ***\n\n");
				number_of_withdrawals = counter;
				break;
				}
	/*end the loop*/
	}
	

/* Calculate and display the closing balance with logic to display message based on end balance*/

printf ("\n\nThe closing balance is $%7.2f\n", balance);

/* Custom Helper Messages based on ending bank balances*/

if (balance >= 50000.00){
	printf ("*** It is time to invest some money! ***\n\n"); /* Investment Messages*/
	}
else if (balance >= 15000.00 && balance <= 49999.99){
	printf ("*** Maybe you should consider a CD. ***\n\n"); /* CD Messages*/
	}
else if (balance >= 1000.00 && balance <= 14999.99){
	printf ("*** Keep up the good work! ***\n\n"); /* Healthy Balance Messages*/
	}
else{
	printf ("*** Your balance is getting low! *** \n\n"); /* Low Balance Messages*/
	}
/* Bank Statement*/

printf ("*** Bank Record ***\n"); /* Bank Statement Header*/

printf ("\nStarting Balance:$ %6.2f\n\n", current_balance); /* Current Balance*/

/* List of Deposits*/
for (counter = 1; counter <= number_of_deposits; counter++){
	printf ("Deposit #%i: %13.2f\n", counter, deposits[counter]);
	}
	
printf ("\n");

/* List of Withdrawals*/
for ( counter = 1; counter <= number_of_withdrawals; counter++){
	printf ("Withdrawal #%i: %10.2f\n", counter, withdrawals[counter]);
	}

	printf ("\nEnding Balance: $ %7.2f\n", balance); /* Ending Balance*/

	return 0;

}
/* end main */


