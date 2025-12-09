#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int first = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (!first)
            {
                printf(" ");
            }
            printf("%d", arr[i]);
            first = 0;
        }
    }
    free(arr);
    return 0;
}