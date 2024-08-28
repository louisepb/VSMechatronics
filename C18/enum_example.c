#include <stdio.h>
#include <stdlib.h>

enum DOW { sun, mon, tue, wed, thu, fri, sat } ;

// Main () - execution starts here
int main (void)
{
    enum DOW day;

    /* Code that get a value for 'day' */
    day = tue;

    switch (day)
    {
        case sun : printf ("Sunday\n") ; break ;
        case mon : printf ("Monday\n") ; break ;
        case tue : printf ("Tuesday\n") ; break ;
        /* etc. */
    }
    return (0);     // Exit indicating success
}