#include<cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int n = 0;
	int x = 0;
	int count = 0;
	int arr[SIZE]{ 0 };

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}