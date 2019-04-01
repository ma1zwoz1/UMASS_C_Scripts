#include <stdio.h>
#include <math.h>

/*****************************************************************
** Created by Zach Wozich 2-11-2018 - Challenge Template
** Function:  Calculate_Simple_Interest
**
** Description:  Simple Interest is the amount of interest
**               calculated by using the formula:
**
**               interest = (P * R * T)
**
**               where P is the principle, r is the rate, and t
**               is the time of the investment
**
**               This function will return the simple interest
**               calculated based upon it being passed the principle,
**               rate, and time.
**
** Parameters:   Principle - The original principal to start with
**               Rate      - The rate of interest.  If you wanted
**                           9.5 percent it would be passed as 0.095
**               Time      - The time in years
**
** Returns:      Interest  - The amount of simple interest earned
**
********************************************************************/
 
float Calculate_Simple_Interest (float principle, float rate, float time) 
{ 
 /* You will only need to create three simple statements here ... */ 
 /* No other statements are needed. */  
 
 /* 1) TO DO:  Step 1) Define a local variable of type float to hold the interest */ 
 
 float interest;
 
 /* 2) TO DO: Step 2) Calculate simple interest earned - Determine the interest using */ 
 /* the values in the parameters: principle, rate, and time ....         */
 /* and assign that value to the local variable you created in step 1 */
 /* that holds the interest */ 
 /* .... Hint: This statement is right in the first homework              */ 

if (principle == 0 || rate == 0 || time == 0)
    {
        printf("\nSince at least one of your values is zero, your interest will be zero\n");
        printf("... next time, make sure all values entered are non-zero!\n");

        interest = 0;
    }
    else 
    {
        /* calculate simple interest earned */
        interest = principle * rate * time;
    }
 

 /* 3) TO DO: Step 3) Add a return statement to return the interest calculated to main */ 
 
  return (interest);
 
} /* end Calculate_Simple_Interest */ 

/*****************************************************************
** Function:  Calculate_Compound_Interest
**
** Description:  Compound Interest is the amount of interest
**               calculated by using the formula:
**
**               interest = (P * pow (1.0 + r, t)) - P
**
**               where P is the principle, r is the rate, and t
**               is the time of the investment
**
**               This function will return the compound interest
**               calculated based upon it being passed the principle,
**               rate, and time.
**
** Parameters:   Principle - The original principal to start with
**               Rate      - The rate of interest.  If you wanted
**                           9.5 percent it would be passed as 0.095
**               Time      - The time in years
**
** Returns:      Interest  - The amount of compound interest earned
**
********************************************************************/

float Calculate_Compound_Interest (float principle, float rate, float time)
{
       /* 1) define a local variable of type float to hold the interest */
       float interest;

       /* 2) TO DO:  calculate compound interest earned ... */
       /* Set interest variable to the right formula value, see above */
       
       if (principle == 0 || rate == 0 || time == 0)
    {
        printf("\nSince at least one of your values is zero, your interest will be zero\n");
        printf("... next time, make sure all values entered are non-zero!\n");

        interest = 0;
    }
    else 
    {
    	 
        /* calculate compound interest earned */
        interest = (principle * pow (1.0 + rate, time)) - principle;
    }
 

       /* 3) return the interest calculated back to the calling function */
       return (interest);

} /* end Calculate_Compound_Interest */

int main (void) 
{ 
 float interest; /* The interest earned over a period of time */
 float principle; /* The amount being invested */ 
 float rate;  /* The interest rate earned */ 
 float time; /* The years of the investment */ 
 
 /* Initialize the interest value */ 
 interest = 0;

 /* Enter values needed to determine interest */ 
 printf ("\nEnter your principle value: "); 
 scanf ("%f", &principle); 
 
 printf ("\nEnter the rate: For example 9.5 percent would be .095: "); 
 scanf ("%f", &rate); 
 
 printf ("\nEnter the period of time of your investment: :"); 
 scanf ("%f", &time); 
 
 interest = Calculate_Simple_Interest (principle, rate, time); 


 /* print the simple interest earned to the screen */ 
 printf("\n\nThe total simple interest earned is: $%8.2f\n", interest);
 
  interest = Calculate_Compound_Interest (principle, rate, time); 
  
  printf("\n\nThe total compound interest earned is: $%8.2f\n", interest); 
 
 /* Call the Calculate_Compound_Interest function and print that interest */
 /* here if you decide to do the optional challenge ... its called just like  */
 /* Calculate_Simple_Interest function and printed the same way.                */
 
 return (0); /* indicate successful completion */


} /* end main */ 
