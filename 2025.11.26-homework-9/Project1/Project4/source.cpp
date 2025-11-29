#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;
double distance(const Point* p1, const Point* p2) 
{
    int dx = p1->x - p2->x;
    int dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
int is_triangle(const Point* a, const Point* b, const Point* c) 
{
    int area = (b->x - a->x) * (c->y - a->y) - (c->x - a->x) * (b->y - a->y);
    return area != 0;
}
double triangle_perimeter(const Point* a, const Point* b, const Point* c) 
{
    return distance(a, b) + distance(b, c) + distance(c, a);
}
double find_max_perimeter(const Point* points, int n) 
{
    double max_perimeter = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            for (int k = j + 1; k < n; k++)
            {
                if (is_triangle(&points[i], &points[j], &points[k])) 
                {
                    double perimeter = triangle_perimeter(&points[i], &points[j], &points[k]);
                    if (perimeter > max_perimeter)
                    {
                        max_perimeter = perimeter;
                    }
                }
            }
        }
    }
    return max_perimeter;
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
    double max_perimeter = find_max_perimeter(points, n);
    printf("%.15g\n", max_perimeter);
    free(points);
    return 0;
}