// WAP to find the euclidean algorithm

#include <stdio.h>
int gcd(int a, int b);

void main()

{
    int a, b, g;
    printf("Enter first_number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    g = gcd(a, b);
    printf("The gcd of %d and %d = %d\n", a, b, g);
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}