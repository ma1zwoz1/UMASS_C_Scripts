/*******************************************************************************************************
Title: Calculate Simple Interest Example in C
Name: Zachary Wozich
Description:
This formula and example was taken from the about.com Mathematics web site, which
has lots of useful information and formulas.
URL: http://math.about.com/od/businessmath/ss/Interest.htm
The amount of interest can be calculated by using the formula: I = Prt
- where P is the principle, r is the rate, and t is the time of the investment
As an example, say we had to borrow or invest an amount of $4500. The bank gives us
an interest rate of 9.5% over a period of 6 years. So, let's plug in the values, and we get:
I = (4500) (0.095) * (6)
I = $2565.00
***********************************************************************************************************/

#include <stdio.h>
int main (void)
{

    float interest;     /* The interest earned over a period of time */
    float principle;   /* The amount being invested */
    float rate;           /* The interest rate earned */
    float time;           /* The years of the investment */

    /* Enter values needed to determine interest */

    printf ("Enter your principle value: ");
    scanf ("%f", &principle);
    printf("\n");  /* new line */

    printf ("Enter the rate: For example 9.5 percent would be .095: ");
    scanf ("%f", &rate);
    printf("\n");  /* new line */

    printf ("Enter the period of time of your investment: ");
    scanf ("%f", &time);
    printf("\n");  /* new line */

    /* If any value inputted is zero, then the interest is zero */
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

    /* print the interest earned to the screen */
    printf("\n\nThe total interest earned is: $%8.2f\n", interest);

    return (0);  /* indicate successful completion */

} /* end main */
