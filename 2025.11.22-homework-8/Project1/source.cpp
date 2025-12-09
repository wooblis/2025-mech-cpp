#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsDigit(unsigned char c)
{
    return (c >= '0' && c <= '9');
}

int main(int argc, char** argv) 
{
    char buffer[10];
    char c;
    fgets(buffer, sizeof(buffer), stdin);
    c = buffer[0];
    if (IsDigit(c)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
    return 0;
}