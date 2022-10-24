#include <stdio.h>
#include <stdlib.h>   

/* Note the new type of main */

int main(int argc, char *argv[])
{ 
     int x; 
     
     /* Print the argument count */
     printf("Arguments -> %d\n",argc); 
     
     /* And the arguments themselves */
     for (x=0; x<argc; x++) 
        printf("%s\n",argv[x]);        
        
     return 0;
} 

