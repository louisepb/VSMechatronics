#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char buffer[100];
  int age=6;
  char name[6];
  
  /* This command copies "James" into the character array 'Name' */

  strcpy(name,"James");

  /* Print to the string (rather than screen) */

  sprintf(buffer,"Name: %s, Age %d ",name,age);

  /* And output the string created */
  printf("\n->%s\n",buffer);

  return 0;
}
