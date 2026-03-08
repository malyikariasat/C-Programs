#include <stdio.h>
int total;
int square(int x)
{
return x*x;
}


int SquareOfSum(int x, int y)
{

int z = square(x+y);
return z;
}
int main()
{

int a = 2, b = 3;
 total = SquareOfSum(a,b);
 printf("Result: %d", total);
 
    return 0;
}