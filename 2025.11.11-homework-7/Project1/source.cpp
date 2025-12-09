#include<stdio.h>

int min(int a, int b, int c, int d);
int main(int argc, char** argv)
{
    int result = min(6, 4, 9, 3);
    printf("%d", result);
    return 0;
}
int min(int a, int b, int c, int d)
{
    int min_value = a;
    if (b < min_value) min_value = b;
    if (c < min_value) min_value = c;
    if (d < min_value) min_value = d;
    return min_value;
}