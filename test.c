#include "test.h"
#include <stdio.h>
int main()
{
    say("hello world\n");
    int a = 1, b = 2;
    swap(&a, &b);
    printf("a=%d, b=%d", a, b);
}