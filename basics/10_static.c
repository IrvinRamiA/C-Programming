#include <stdio.h>

int sum(int num);

int main(void)
{
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));

    return 0;
}

int sum(int num)
{
    static int sum = 0;

    sum += num;

    return sum;
}

/*
Static Variables
By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase
their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.
Static vs Global?
While static variables have scope over the file containing them making them accessible only inside a given file, global
variables can be accessed outside the file too.

Static Functions
By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to
the file containing it.
*/
