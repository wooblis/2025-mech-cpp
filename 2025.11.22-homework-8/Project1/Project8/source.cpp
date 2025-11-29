#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s[256];
    int count[256] = { 0 };
    int i = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i]; i++) 
    {
        count[(int)s[i]]++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (count[i] == 2) 
        {
            printf("%c\n", (char)i);
            break;
        }
    }
    return 0;
}