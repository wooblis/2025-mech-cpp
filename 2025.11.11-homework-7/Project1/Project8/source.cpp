#include<stdio.h>

int C(int n, int k);
int main(int argc, char** argv)
{
    int result = C(5, 2);
    printf("%d", result);
    return 0;
}
int C(int n, int k)
{
    if (k == 0 || k == n) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}