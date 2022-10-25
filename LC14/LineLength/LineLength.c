#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float LineLength(float x1, float x2, float y1, float y2);

int main()
{
    float p1x = 3.4, p2x = 5.7, p1y = 0.0, p2y = 6.8;
    float length = 0;
    length = LineLength(p1x, p2x, p1y, p2y);
    printf("Length = %f", length);
    return 0;
}

float LineLength(float x1, float x2, float y1, float y2)
{
    float result;
    float dx = x2-x1;
    float dy = y2-y1;
    float tol = 1e-10;
    if (fabs(dx) < tol && fabs(dy) < tol )
        return -1;
    result = sqrt(dx*dx + dy*dy);
    return result;
}
