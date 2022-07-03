#include <stdio.h>

int main()
{
    int n = 10;

    int *pointer_to_n = &n;

    *pointer_to_n += 1;

    /* testing code */
    if (pointer_to_n != &n)
        return 1;
    if (*pointer_to_n != 11)
        return 1;

    printf("Done!\n");
    
    return 0;
}

/*
Pointers are variables and play a very important role in C programming language. They are used for several reasons, such
as:

    Strings
    Dynamic memory allocation
    Sending function arguments by reference
    Building complicated data structures
    Pointing to functions
    Building special data structures (i.e. Tree, Tries, etc...)

*/