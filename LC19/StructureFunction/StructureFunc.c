#include <stdio.h>
#include <math.h>

struct Point			/* Define a struture called Point */
{
	int x;			/* The X data */
	int y;			/* The Y data */
};

struct Line
{
    struct Point p1;
    struct Point p2;
    float length;
};

void LineLength( struct Line* line);

int main()
{
    struct Line line;
    line.p1.x = 0;
    line.p1.y = 0;
    line.p2.x = 3;
    line.p2.y = 4;

    LineLength( &line );
    printf( "Line length = %.3f\n", line.length);
}

void LineLength( struct Line* line)
{
    float dx = line->p2.x - line->p1.x;
    float dy = line->p2.y - line->p1.y;
    line->length = sqrt( dx*dx + dy*dy );
}