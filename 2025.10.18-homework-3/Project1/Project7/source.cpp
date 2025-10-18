#include<cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int f = 0;
	for (int x = -100; x <= 100; x++)
	{
		long long r = (long long)a * x * x * x + (long long)b * x * x + (long long)c * x + d;
		if (r == 0)
		{
			if (f > 0)
			{
			printf(" ");
			}
		printf("%d", x);
		f++;
		}
	}
	return 0;
}