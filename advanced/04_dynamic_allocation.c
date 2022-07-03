#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} point;

int main()
{
    point *mypoint = NULL;

    mypoint = (point *)malloc(sizeof(point));

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);

    /*
    After we are done using the dynamically allocated struct, we can release it using free.
    Note that the free does not delete the myperson variable itself, it simply releases the data that it points to. The
    myperson variable will still point to somewhere in the memory - but after calling myperson we are not allowed to
    access that area anymore. We must not use that pointer again until we allocate new data using it.
    */

    return 0;
}
