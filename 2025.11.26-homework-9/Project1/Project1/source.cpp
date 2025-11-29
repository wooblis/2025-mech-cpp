#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} Point;
double distance_squared_ptr(const Point* p) 
{
    return p->x * p->x + p->y * p->y;
}
void find_farthest_ptr(Point* points, int n, Point* result) 
{
    *result = points[0];
    double max_dist = distance_squared_ptr(&points[0]);
    for (int i = 1; i < n; i++) 
    {
        double dist = distance_squared_ptr(&points[i]);
        if (dist > max_dist) 
        {
            max_dist = dist;
            *result = points[i];
        }
    }
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
    Point farthest;
    find_farthest_ptr(points, n, &farthest);
    printf("%d %d\n", farthest.x, farthest.y);
    free(points);
    return 0;
}