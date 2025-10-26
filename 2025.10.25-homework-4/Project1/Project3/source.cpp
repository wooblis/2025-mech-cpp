#include<cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int n = 0;
	int arr[SIZE]{ 0 };

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int min_grade = arr[0];
	int max_grade = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_grade)
		{
			min_grade = arr[i];
		}
		if (arr[i] > max_grade)
		{
			max_grade = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max_grade)
		{
			arr[i] = min_grade;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	return 0;
}