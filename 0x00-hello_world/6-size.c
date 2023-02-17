#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
        printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
        printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(int));
        printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(double));
        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
        return (0);
}
