#include<stdio.h>

void hanoi(int height, int from, int to);
int main(int argc, char** argv)
{
    int height = 0;
    scanf_s("%d", &height);
    hanoi(height, 1, 2);
    return 0;
}
void hanoi(int height, int from, int to)
{
    if (height == 0) return;
    if (height == 1) {
        printf("Disk 1 move from %d to %d\n", from, to);
        return;
    }
    int mid = 6 - from - to;
    hanoi(height - 1, from, mid);
    printf("Disk %d move from %d to %d\n", height, from, to);
    hanoi(height - 1, mid, to);
}