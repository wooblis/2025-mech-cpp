#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s[256];
    int i = 0;
    int l = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    l = strlen(s);
    for (i = 0; i < l / 2; i++)
        if (s[i] != s[l - 1 - i])
        {
            printf("no\n");
            return 0;
        }
    printf("yes\n");
    return 0;
}