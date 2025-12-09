#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char first_name[50];
    char last_name[50];
    int math;
    int physics;
    int computer_science;
} Student;

int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);
    Student* students = (Student*)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++) 
    {
        scanf_s(" %s %s %d %d %d",
            students[i].last_name,
            students[i].first_name,
            &students[i].math,
            &students[i].physics,
            &students[i].computer_science);
    }
    double math_sum = 0;
    double physics_sum = 0;
    double cs_sum = 0;
    for (int i = 0; i < n; i++)
    {
        math_sum += students[i].math;
        physics_sum += students[i].physics;
        cs_sum += students[i].computer_science;
    }
    printf("%.1f %.1f %.1f\n",
        math_sum / n,
        physics_sum / n,
        cs_sum / n);
    free(students);
    return 0;
}