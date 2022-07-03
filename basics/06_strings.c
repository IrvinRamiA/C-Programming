#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Create a string which we can only use for reading */
    char *name1 = "John Smith";

    /* Create a string which can be manipulated */
    char name2[] = "John Smith";
    /* It is the same as: */
    char name3[11] = "John Smith"; /* 10 characters long + string termination ('\0') */

    /* String formatting with printf */
    int age = 27;
    printf("%s is %d years old.\n", name1, age);

    /* String length */
    printf("%d\n", strlen(name1));
    printf("%d\n", strlen(name2));
    printf("%d\n", strlen(name3));

    /* String comparison */
    char *name4 = "John";

    if (strncmp(name4, "John", 4) == 0)
    {
        printf("Hello, John!\n");
    }
    else
    {
        printf("You are not John. Go away.\n");
    }

    /* String concatenation */
    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 20);
    printf("%s\n", dest);

    return 0;
}
