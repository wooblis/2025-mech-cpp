#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point;
typedef struct
{
    double x;
    double y;
} Center;
void calculate_center(const Point* points, int n, Center* result) 
{
    double sum_x = 0.0, sum_y = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_x += points[i].x;
        sum_y += points[i].y;
    }
    result->x = sum_x / n;
    result->y = sum_y / n;
}

int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);
    Point* points = (Point*)malloc(n * sizeof(Point));
    for (int i = 0; i < n; i++) 
    {
        points[i].x = 0;
        points[i].y = 0;
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    Center center;
    calculate_center(points, n, &center);
    printf("%.15g %.15g\n", center.x, center.y);
    free(points);
    return 0;
}