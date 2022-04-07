#include <stdio.h>
#include <stdlib.h>

union number{
  double d;
  float f;
  long l;
  int i;
  short s;
  unsigned char c[8];
};

int main(void)
{
  int my_i;
  union number mynum;
  printf ("\nPlease enter a number "); 
  scanf("%d",&my_i);
  printf ("\nThe bytes making up your number %d are ",my_i); 

  mynum.i = my_i;
  printf ("%d %d %d %d %d %d %d %d ",mynum.c[0],mynum.c[1],mynum.c[2],mynum.c[3],mynum.c[4],mynum.c[5],mynum.c[6],mynum.c[7]);

  printf ("\nSize of double id %d ",sizeof(double));
  printf ("\nSize of float id %d ",sizeof(float));
  printf ("\nSize of long id %d ",sizeof(long));
  printf ("\nSize of int id %d ",sizeof(int));
  printf ("\nSize of short id %d ",sizeof(short));
  return 0;

}