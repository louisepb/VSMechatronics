#include <stdio.h>
int main(void) { int revenue = 80; int cost = 50; int roi; 
roi = (100 * (revenue - cost)) / cost; if (roi >= 0) { 
printf ("%d\n", roi); } return 0; }