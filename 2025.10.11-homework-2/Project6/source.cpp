#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    double discr = 0;
    double x1 = 0;
    double x2 = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    if (a == 0 && b == 0 && c == 0)
    {
        printf("-1");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("0");
    }
    else if (a == 0 && b != 0)
    {
        printf("1\n");
        x1 = -c * 1.0 / b;
        printf("%.6lf", x1);
    }
    else
    {
        discr = b * b * 1.0 - 4.0 * a * c;
        if (discr < 0)
        {
            printf("0");
        }
        else if (discr == 0)
        {
            printf("1\n");
            x1 = (-b / (2.0 * a));
            printf("%.6lf", x1);
        }
        else
        {
            printf("2\n");
            x1 = (-b - sqrt(discr)) / (2.0 * a);
            x2 = (-b + sqrt(discr)) / (2.0 * a);
            if (x1 < x2)
            {
                printf("%.6lf\n", x1 != 0 ? x1 : 0);
                printf("%.6lf", x2 != 0 ? x2 : 0);
            }
            else
            {
                printf("%.6lf\n", x2 != 0 ? x2 : 0);
                printf("%.6lf", x1 != 0 ? x1 : 0);
            }
        }
    }
    return 0;
}