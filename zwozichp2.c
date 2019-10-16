/*******************************************************************************************************
Title: PROGRAMMING ASSIGNMENT #2
Name: Zachary Wozich
Description:
Write a C program that determines the miles 
per gallon for 3 tanks of gasoline that a user fills in his/her car.)
The program should prompt the user to enter the number of gallons used and 
the number of miles driven for each of the 3 tanks of gas. The program should 
then calculate and display the miles per gallon obtained for each tank. 
Once processing is complete for the 3 tanks, the program will calculate the overall
mileage(total gallons / total miles) and display a friendly "Goodbye" message as shown below.

Once you create, compile, link and run your program, your program should present the following dialog to the user:
Welcome to the mileage calculator.
This program will calculate the miles per gallon for you for three tanks of gas after you have entered the gallons used and miles driven.
Enter the number of gallons used for tank #1: 12.8 Enter the number of miles driven: 287.1
*** The miles per gallon for this tank is 22.4
Enter the number of gallons used for tank #2: 10.3 Enter the number of miles driven: 200.2
*** The miles per gallon for this tank is 19.4
Enter the number of gallons used for tank #3: 5.2 Enter the number of miles driven: 120.9
*** The miles per gallon for this tank is 23.3
Your overall average miles per gallon for three tanks is 21.5 Thank you for using the program. Goodbye.
***********************************************************************************************************/

#include <stdio.h>

int main(void)
 {
    int counter; /* integar for counter used in while loop */
    
	float miles; /* float for miles driven */
    
	float gallons; /* float for gallons used */
    
	float mpg; /* float for mpg calc */
    
	float totalgallons; /* float for total gallons */
    
	float totalmiles; /* float for total miles */
    
	float total_mpg_avg; /* float for avg mpg */
 
    /* print welcome message */
 	printf("Welcome to the mileage calculator.\n\n" "This program will calculate the miles per gallon for you for three tanks of gas after you have entered the gallons used and miles driven. \n\n");
 
    mpg = 0; /* initialize mpg */
    
    counter = 1; /*initialize loop counter */
    
    totalmiles = 0; /*initialize total miles */
    
    totalgallons = 0; /* initialize total gallons*/
 
 	/* start while loop for 3 tanks of gas */
     while (counter < 4)
	  {  
	  	/* prints miles driven to enter*/
        printf("Enter the gallons used for tank #"); printf("%d: ",counter, "\n"); /* incremental counter used to display tank# */
        
         /* enter gallons */
		scanf("%f", &gallons);
        
        /* prints miles driven to enter*/
        printf("Enter the miles driven: ");
        
        /* scanf for miles driven*/
		scanf("%f", &miles);
         
        mpg = miles / gallons; /* mpg calc */
        
		counter = counter + 1; /* counter incrementer */
        
		totalmiles += miles; /* total miles register*/
        
		totalgallons += gallons; /* total gallons register*/
 
 		/* prints total MPG for each tank in while loop*/
        printf("***The miles per gallon for this tank is %.1f\n\n", mpg); 
	   } /* end while for 3 tanks of gas */
     
	/* total avg mpg for 3 tanks of gas in while loop*/
	total_mpg_avg = totalmiles / totalgallons; 
	
	/* Print final output*/
	printf("Your overall average miles per gallon for three tanks is %.1f \n\n", total_mpg_avg); /* prints avg mpg for all three tanks*/
	printf("Thank you for using the program. Goodbye.\n\n"); /* print goodbye*/
 }
