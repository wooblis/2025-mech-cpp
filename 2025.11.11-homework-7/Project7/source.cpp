#include<stdio.h>

int phi(int n);
int main(int argc, char** argv)
{
    int result = phi(5);
    printf("%d", result);
    return 0;
}
int phi(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    return phi(n - 1) + phi(n - 2);
}