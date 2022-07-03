#include <stdio.h>

void some_function(int arg);

int main(void)
{
    void (*pf)(int);
    pf = &some_function;

    printf("We're about to call some_function() using a pointer!\n");
    (pf)(5);
    printf("Back to main now!\n");

    return 0;
}

void some_function(int arg)
{
    printf("This is some_function being called and arg is: %d\n", arg);
    printf("Whoops leaving the function now!\n");
}
