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
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
		if (i > 0)
		{
			printf(" ");
		}
	}
	return 0;
}