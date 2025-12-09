#include<cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int n = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int arr[SIZE]{ 0 };
	scanf_s("%d", &n);
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);
	scanf_s("%d", &D);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	int start = A - 1;
	int end = B - 1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	start = C - 1;
	end = D - 1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
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