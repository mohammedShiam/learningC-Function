#include <stdio.h>

// CREAT FUNCTION PROTOTYPES
int addNumber(int a, int b);
int subNumber(int x, int y);
int malNumber(int x, int y);
int divNumber(int x, int y);
int add, sub, mal, div;

int main()
{

    addNumber(10, 20);
    subNumber(10, 20);
    malNumber(10, 20);
    divNumber(10, 20);

    printf("%d\n", add);
    printf("%d\n", sub);
    printf("%d\n", mal);
    printf("%d\n", div);
    printf("%d\n", add + sub);

    return 0;
}

// CREAT USER DEFINED FUNCTION
int addNumber(int a, int b)
{
    add = a + b;
    return add;
}

int subNumber(int a, int b)
{
    return sub = a - b;
}

int malNumber(int a, int b)
{
    return mal = a * b;
}

int divNumber(int a, int b)
{
    return div = a / b;
}