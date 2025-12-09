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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            count++;
        }
    }
    printf("%d", count);
    free(arr);
    return 0;
}