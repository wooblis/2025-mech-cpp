#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
    char b[256];
        char w[256] = "";
    char t[256];
    int m = 0;
    int i = 0;
    int j = 0;
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';
    strcat_s(b, " ");
    for (i = 0; b[i]; i++)
    {
        if (b[i] != ' ')
        {
            t[j++] = b[i];
        }
        else if (j > 0)
        {
            t[j] = '\0';
            if (j > m)
            { 
                m = j; strcpy_s(w, t); 
            }
            j = 0;
        }
    }
    printf("%s\n%d\n", w, m);
    return 0;
}