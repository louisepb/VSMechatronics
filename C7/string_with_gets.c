#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
	// Declare variable - maximum 99 characters
    char str[100]; 
    
    // Prompt for text
    printf("enter some text\n"); 
    
    // Store intput in str 
    gets(str); 
    
    // Display a message on the screen
    printf("you entered : %s\n", str); 
    
    // Exit from main
    return 0; 
} 