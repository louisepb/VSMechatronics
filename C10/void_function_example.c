#include <stdio.h>
#include <stdlib.h>

// Define HOW the function is to be used, code comes later
void DisplayDayOfTheWeek ( int Day );

int main(void)		// Execution starts here
{
   	int d;	// Declare variable

    // Obtain values
    printf("\nPlease enter a number betwwen 0 and 6");
    scanf("%d", &d);

    // Use a function to display the day of the week
    DisplayDayOfTheWeek(d);

    return 0;
}

// Function to display day of week - nothing is returned
void DisplayDayOfTheWeek ( int Day )
{
    // Display date based on value
    // Case values on one line as easier to cut/paste :-)    
    switch (Day)
    {
			case 0 : printf ("Sunday") ; break;
			case 1 : printf ("Monday") ; break;
			case 2 : printf ("Tuesday") ; break;
         
		    /* etc. for other days of the week */    
    
    	default:
        	printf ("Invaid day provided");
    }
    return;	// No value needed as the return type is void
}
