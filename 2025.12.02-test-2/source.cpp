#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct 
{
    char name[100];
    int deadline;
} Project;

typedef struct
{
    Project* projects;
    int count;
    int capacity;
} ProjectList;

typedef struct 
{
    char name[50];
    char position[50];
    ProjectList projects;
} Employee;

void init_project_list(ProjectList* pl) 
{
    pl->count = 0;
    pl->capacity = 2;
    pl->projects = (Project*)malloc(pl->capacity * sizeof(Project));
}

void add_project(ProjectList* pl, const char* project_name, int deadline)
{
    if (pl->count >= pl->capacity) 
    {
        pl->capacity *= 2;
        pl->projects = (Project*)realloc(pl->projects, pl->capacity * sizeof(Project));
    }
    strcpy(pl->projects[pl->count].name, project_name);
    pl->projects[pl->count].deadline = deadline;
    pl->count++;
}

void free_project_list(ProjectList* pl) 
{
    free(pl->projects);
    pl->projects = NULL;
    pl->count = 0;
    pl->capacity = 0;
}

Employee* create_employees(int n) 
{
    Employee* employees = (Employee*)malloc(n * sizeof(Employee));
    for (int i = 0; i < n; i++) 
    {
        init_project_list(&employees[i].projects);
    }
    return employees;
}

Employee* find_employee_with_most_projects(Employee* employees, int n)
{
    if (n <= 0)
    {
        return NULL;
    }

    Employee* best = &employees[0];
    for (int i = 1; i < n; i++) 
    {
        if (employees[i].projects.count > best->projects.count)
        {
            best = &employees[i];
        }
    }
    return best;
}

void print_employee(const Employee* employee) 
{
    printf("Работник: %s, Должность: %s\n", employee->name, employee->position);
    printf("Количество проектов: %d\n", employee->projects.count);

    for (int i = 0; i < employee->projects.count; i++) 
    {
        printf("  %d. %s (срок: %d дней)\n",
            i + 1,
            employee->projects.projects[i].name,
            employee->projects.projects[i].deadline);
    }
}

void free_employees(Employee* employees, int n)
{
    for (int i = 0; i < n; i++)
    {
        free_project_list(&employees[i].projects);
    }
    free(employees);
}

void clear_input_buffer()
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str)
{
    if (str != NULL)
    {
        str[strcspn(str, "\n")] = '\0';
    }
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 0;
    printf("Введите количество работников: ");
    scanf("%d", &n);
    clear_input_buffer();

    Employee* employees = create_employees(n);

    for (int i = 0; i < n; i++)
    {
        printf("\nРаботник %d:\n", i + 1);
        printf("Имя: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        clear_last_linebreak(employees[i].name);

        printf("Должность: ");
        fgets(employees[i].position, sizeof(employees[i].position), stdin);
        clear_last_linebreak(employees[i].position);

        int project_count = 0;
        printf("Количество проектов: ");
        scanf("%d", &project_count);
        clear_input_buffer();

        for (int j = 0; j < project_count; j++)
        {
            char project_name[100];
            int deadline;

            printf("  Проект %d:\n", j + 1);
            printf("    Название: ");
            fgets(project_name, sizeof(project_name), stdin);
            clear_last_linebreak(project_name);

            printf("    Срок (дней): ");
            scanf("%d", &deadline);
            clear_input_buffer();

            add_project(&employees[i].projects, project_name, deadline);
        }
    }

    printf("\nВсе работники:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\n%d. ", i + 1);
        print_employee(&employees[i]);
    }

    Employee* most_busy = find_employee_with_most_projects(employees, n);
    if (most_busy)
    {
        printf("\nРаботник с наибольшим количеством проектов:\n");
        print_employee(most_busy);
    }

    free_employees(employees, n);

    return 0;
}