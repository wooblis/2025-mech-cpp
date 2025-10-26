#include<cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int n = 0;
	int L = 0;
	int R = 0;
	int arr[SIZE]{ 0 };

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &L);
	scanf_s("%d", &R);
	L = L - 1;
	R = R - 1;
	int max_value = arr[L];
	int max_index = L;
	for (int i = L + 1; i <= R; i++)
	{
		if (arr[i] > max_value)
		{
			max_value = arr[i];
			max_index = i;
		}
	}
	printf("%d %d", max_value, max_index +1);
	return 0;
}