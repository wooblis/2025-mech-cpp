#include<stdio.h>
#include<stdbool.h>

bool Election(bool x, bool y, bool z);
int main(int argc, char** argv)
{
    bool x, y, z;
    scanf_s("%d %d %d", &x, &y, &z);
    bool result = Election(true, true, false);
    return 0;
}
bool Election(bool x, bool y, bool z)
{
    if (x == y) return x;
    else return z;
}