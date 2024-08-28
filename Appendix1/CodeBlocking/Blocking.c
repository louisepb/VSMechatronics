#include<stdio.h> 

#define BLOCKSIZE (8) 

int main(void)
{ 
    int i = 0; 
    int limit = 20;  /* could be anything */ 
    int blocklimit; 

    /* The limit may not be divisible by BLOCKSIZE, 
    * go as near as we can first, then tidy up.
    */ 
    blocklimit = (limit / BLOCKSIZE) * BLOCKSIZE; 
    /* unroll the loop in blocks of 8 */ 
    while( i < blocklimit ) 
    { 
        printf("process(%d)\n", i); 
        printf("process(%d)\n", i+1); 
        printf("process(%d)\n", i+2); 
        printf("process(%d)\n", i+3); 
        printf("process(%d)\n", i+4); 
        printf("process(%d)\n", i+5); 
        printf("process(%d)\n", i+6); 
        printf("process(%d)\n", i+7); 

        /* update the counter */ 
        i += 8; 
    }
    if( i < limit ) 
    { 
        /* Jump into the case at the place that will allow
        * us to finish off the appropriate number of items. */
        switch( limit - i ) 
        { 
            case 7 : printf("process(%d)\n", i); i++; 
            case 6 : printf("process(%d)\n", i); i++; 
            case 5 : printf("process(%d)\n", i); i++; 
            case 4 : printf("process(%d)\n", i); i++; 
            case 3 : printf("process(%d)\n", i); i++; 
            case 2 : printf("process(%d)\n", i); i++; 
            case 1 : printf("process(%d)\n", i); 
        }
    } 
}