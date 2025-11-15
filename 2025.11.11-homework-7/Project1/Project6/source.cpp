#include<stdio.h>

double fastPower(double a, int n);
int main(int argc, char** argv)
{
    double result = fastPower(2.0, 10);
    printf("%d", result);
    return 0;
}
double fastPower(double a, int n)
{
    if (n == 0) return 1.0;
    double half = fastPower(a, n / 2);
    if (n % 2 == 0)
    {
        return half * half;
    }
    else
    {
        return a * half * half;
    }
}