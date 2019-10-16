/*******************************************************************************************************
Title: PROGRAMMING ASSIGNMENT #3
Name: Zachary Wozich
Description:
Write a C program that calculates and prints the average of several grades entered by the user.
The program should first prompt the user to enter the number of grades to process (at least 2
grades must be entered by user!) .
It should then prompt the user for each grade. As each grade is entered, the program should ensure
that the grades entered are in the grade range of zero to 100. If the grade is not in that range, an
error message should be displayed (as shown below), and the user should be re-prompted for a
grade. Any bad grades entered should not be included in the average calculation.
Once all values are entered, the program should calculate and print the average of all of the positive
values entered, rounded to the nearest whole number.
At the end display a message for the appropriate letter grade as shown here:
90 - 100: A
80 - 89: B
70 - 79: C
60 - 69: D
0 - 59: F
This program will feature the if statement as well as programming techniques for data validation. I
call it a trap loop. It traps the user into entering valid data.
The dialog with the user should be as follows:
This program calculates the average of as many grades you wish to enter.
First, enter the number of grades to process: 4
Now enter the 4 grades to be averaged.
Enter grade #1: 100
Enter grade #2: 80
Enter grade #3: -20
*** Invalid entry. Grade must be 0 to 100. ***
Enter grade #3: 25
Enter grade #4: 54
The average of the 4 grades entered is 65
You have a letter grade of D
***********************************************************************************************************/

#include <stdio.h>

int main(void)
 {
    int num_grades, counter; /* integars for number of grades to average and counter used in for loop */
    
	float grades; /* float for grades entered */  
    
	float totalgrades; /* float for total grades used for numerator to calculate average */
    
	float total_grades_avg; /* float for avg grades */
	
 	grades = 0; /* initialize grades to enter */  
           
    totalgrades = 0; /*initialize total sum grades */
    
    total_grades_avg = 0; /* initialize total average of grades*/

    /* print welcome message and instructions to enter grades in numeric values 0-100 */
 	printf("Welcome to the average grade calculator.\n\n" "This program will calculate the average grade of the grades entered (at least 2 grades must be entered by user with grade value of (0 - 100)). \n\n");
	
	/* Prompt for number of grades. */
 	printf ("First, enter the number of grades to process:");
 	scanf ("%d", &num_grades); /* enter number of grades to average. */
 	
 	/* Prompt for grades. */
 	printf ("Now, enter the %d grades to average.\n\n", num_grades);
 	
 	/* start for loop for n number of grades */
    for(counter = 0; counter < num_grades; ++counter)
	  {  
	  
	  	/* prints grade to enter*/
        printf("Enter the grade for grade# %i: ", counter + 1); /* incremental counter used to display grade# to process */
        
         /* enter grade */
		scanf("%f", &grades);
		
		/* Ensure grade is between 0 and 100. If not, re-prompt. */
		if (grades < 0 || grades > 100)
		  {
		 	printf ("Invalid entry. Grade must be 0 to 100..\n");
		 	counter = counter - 1; /* decrement counter and reposition on current grade*/
		 	continue;
	      }
        
		totalgrades += grades; /* total grades register*/
        
	  } /* end for loop for grades entered */
	
	/* total avg all four grades in while loop*/
	total_grades_avg = totalgrades / num_grades; 
	
	/* Print final average output for n number of grades entered*/
	printf("Your overall average grade for all %d grades entered is %.f \n", num_grades, total_grades_avg);
	
	/* If/elseif logic to determine final letter grade*/
		
    if (total_grades_avg >= 90)
	  {		/* Print final grade output*/
	  		printf("You have a letter grade of A \n\n");
	    }
	    else if (total_grades_avg >= 80)
	    {	/* Print final grade output*/
	        printf("You have a letter grade of B \n\n");
	    }
	    else if (total_grades_avg >= 70)
	    {	/* Print final grade output*/
	        printf("You have a letter grade of C \n\n");
	    }
	    else if (total_grades_avg >= 60)
	    {	/* Print final grade output*/
	        printf("You have a letter grade of D \n\n");
	    }
	    else
	    {	/* Print final grade output*/
	        printf("You have a letter grade of F \n\n");
	    }
	    return 0;
	
 }
