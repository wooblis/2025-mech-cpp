#include<stdio.h>

double power(double a, int n);
int main(int argc, char** argv)
{
    double result = power(5, 2);
    printf("%d", result);
    return 0;
}
double power(double a, int n)
{
    double result = 1.0;
    for (int i = 0; i < n; i++)
    {
        result *= a;
    }
    return result;
}