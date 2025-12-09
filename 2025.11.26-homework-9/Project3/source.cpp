#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;
double distance_squared(const Point* p1, const Point* p2) 
{
    int dx = p1->x - p2->x;
    int dy = p1->y - p2->y;
    return dx * dx + dy * dy;
}
double distance(const Point* p1, const Point* p2) 
{
    return sqrt(distance_squared(p1, p2));
}
double find_diameter(const Point* points, int n) 
{
    double max_distance = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dist = distance(&points[i], &points[j]);
            if (dist > max_distance)
            {
                max_distance = dist;
            }
        }
    }
    return max_distance;
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
    double diameter = find_diameter(points, n);
    printf("%.15g\n", diameter);
    free(points);
    return 0;
}