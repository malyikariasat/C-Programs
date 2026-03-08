#include <stdio.h>
int main()
{
    int a;
    int fact=1;
    printf("Enter a numer :");
    scanf("%d", &a);
if(a<0)
{
    printf("Factorial is not defined for negative numers.");
}
else{
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d ",a,fact);

}
return 0;
}