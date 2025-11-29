#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Compare(char* S1, char* S2)
{
    return strcmp(S1, S2) == 0;
}

int main(int argc, char** argv)
{
    char buffer1[256];
    char buffer2[256];
    fgets(buffer1, sizeof(buffer1), stdin);
    buffer1[strcspn(buffer1, "\n")] = '\0';
    fgets(buffer2, sizeof(buffer2), stdin);
    buffer2[strcspn(buffer2, "\n")] = '\0';
    if (Compare(buffer1, buffer2))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}