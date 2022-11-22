#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int age;
  char name[10];

  /* we check the argument count is 3  ( prog name plus 2 params ) */ 
  if ( argc != 3 )
  {
    printf ("\nProgram use %s name age ",argv[0]);
    exit (0);
  } 

  /* Copy the command parameters into suitable variables */ 
  sscanf(argv[1],"%s",name);
  sscanf(argv[2],"%d",&age);

  /* And display for all to see */ 
  printf ("\nHello %s, you are %d ",name,age);
  
  return 0;
}
