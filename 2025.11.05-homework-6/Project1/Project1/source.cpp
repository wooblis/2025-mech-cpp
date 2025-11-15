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
    for (int i = 0; i < n; i += 2) 
    {
        printf("%d", arr[i]);
        if (i + 2 < n)
        {
            printf(" ");
        }
    }
    free(arr);
    return 0;
}