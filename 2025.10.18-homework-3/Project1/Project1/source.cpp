#include<cstdio>
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1)
	{
		printf("1");
	}
	else
	{
		int x = 0;
		int y = 1;
		int z = 0;
		int a = 2;
		while (a <= n)
		{
			z = x + y;
			x = y;
			y = z;
			++a;
		}
		printf("%d", z);
	}
	return 0;
}