#include <stdio.h>
#include <stdlib.h>

union number
{
    double d;
    float f;
    long l;
    int i;
    unsigned short s;
    unsigned char c[8];
};

int main(void)
{
    /* Define variables and a union */
    int my_i;
    short my_s;
    unsigned char tc;
    union number mynum;

    /* Prompt for use input ao a number whose bytes we are to swap */
    printf ("\nPlease enter a number ");
    scanf("%hi",&my_s);     // hi is the format for a signed short

    /* pop this number into our union */
    mynum.s = my_s;

    /* Show the present byte order */
    printf ("\nThe bytes making up your number %hi are ",my_s);
    printf ("%d %d %d %d %d %d %d %d ",mynum.c[0],mynum.c[1],mynum.c[2],mynum.c[3],mynum.c[4],mynum.c[5],mynum.c[6],mynum.c[7]);

    /* We now swap the two lowest bytes (via an intermediate variable) */
    tc = mynum.c[1];
    mynum.c[1] = mynum.c[0];
    mynum.c[0] = tc;

    printf ("\nThe bytes making up your number are now ");
    printf ("%d %d %d %d %d %d %d %d ",mynum.c[0],mynum.c[1],mynum.c[2],mynum.c[3],mynum.c[4],mynum.c[5],mynum.c[6],mynum.c[7]);

    printf ("\nWhich corresponds to %d ",mynum.s);

    // Repeat for an integer
     /* Prompt for use input ao a number whose bytes we are to swap */
    printf ("\nPlease enter a number [INTEGER] ");
    scanf("%d",&my_i);

    /* pop this number into our union */
    mynum.i = my_i;

    /* Show the present byte order */
    printf ("\nThe bytes making up your number %d are ",my_i);
    printf ("%d %d %d %d %d %d %d %d ",mynum.c[0],mynum.c[1],mynum.c[2],mynum.c[3],mynum.c[4],mynum.c[5],mynum.c[6],mynum.c[7]);

    /* We now swap the 1st and 4th bytes (via an intermediate variable) */
    tc = mynum.c[3];
    mynum.c[3] = mynum.c[0];
    mynum.c[0] = tc;

    /* We now swap the 1st and 4th bytes (via an intermediate variable) */
    tc = mynum.c[2];
    mynum.c[2] = mynum.c[1];
    mynum.c[1] = tc;

    printf ("\nThe bytes making up your number are now ");
    printf ("%d %d %d %d %d %d %d %d ",mynum.c[0],mynum.c[1],mynum.c[2],mynum.c[3],mynum.c[4],mynum.c[5],mynum.c[6],mynum.c[7]);

    printf ("\nWhich corresponds to %d ",mynum.i);

    return 0;

}
