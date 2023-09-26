# define NDEBUG
#include <stdio.h>
# include <assert.h>

int main()
{
    int x = 7;
    assert (x==5);
    printf("x = %d\n", x);
    return 0;
}