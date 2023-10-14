/* Author: Kanashev E.A. */
#include <stdio.h>
#include <stdlib.h>

float add(float, float);
int main()
{
    printf("Hello world!\n");
    float a = 1.2;
    float b = 3.23;
    float c = add (a, b);
    a = c - b;
    b = c + a;
    return 0;
}

float add(float a, float b)
{
    return a + b;
}
