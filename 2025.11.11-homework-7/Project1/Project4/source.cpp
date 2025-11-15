#include<stdio.h>
#include<stdbool.h>

bool Prime(int n);
int main(int argc, char** argv)
{
    int n = 7;
    if (Prime(n))
    {
        printf("prime\n");
    }
    else
    {
        printf("composite\n");
    }
    return 0;
}
bool Prime(int n)
{
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}