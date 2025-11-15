#include<stdio.h>

double power(double a, int n);
int main(int argc, char** argv)
{
    double result = power(5.0, 2.0);
    printf("%d", result);
    return 0;
}
double power(double a, int n)
{
    if (n == 0) return 1.0;
    if (n > 0)
    {
        return a * power(a, n - 1);
    }
    else
    {
        return 1.0 / power(a, -n);
    }
}