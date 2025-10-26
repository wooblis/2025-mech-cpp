#include<cstdio>
#include <cmath>
#define SIZE 1000
int main(int argc, char** argv)
{
	int n = 0;
	int x = 0;
	int arr[SIZE]{ 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &x);
	int closest = arr[0];
	int min_diff = abs(arr[0] - x);
	for (int i = 1; i < n; i++)
	{
		int current_diff = abs(arr[i] - x);
		if (current_diff < min_diff)
		{
			min_diff = current_diff;
			closest = arr[i];
		}
		else if (current_diff == min_diff)
		{
			if (arr[i] < closest)
			{
				closest = arr[i];
			}
		}
	}
	printf("%d", closest);
	return 0;
}