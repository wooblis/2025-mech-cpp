#include <stdio.h>
#include <string.h>

unsigned char ToUpper(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main(int argc, char** argv)
{
    char buffer[10];
    unsigned char c;
    fgets(buffer, sizeof(buffer), stdin);
    c = buffer[0];
    printf("%c\n", ToUpper(c));
    return 0;
}