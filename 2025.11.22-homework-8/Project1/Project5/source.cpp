#include <stdio.h>
#include <string.h>

int CountWords(char* str)
{
    int count = 0;
    int in_word = 0;
    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] == ' ') 
        {
            in_word = 0;
        }
        else
        {
            if (!in_word) 
            {
                count++;
                in_word = 1;
            }
        }
    }
    return count;
}

int main(int argc, char** argv)
{
    char buffer[256];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    printf("%d\n", CountWords(buffer));
    return 0;
}