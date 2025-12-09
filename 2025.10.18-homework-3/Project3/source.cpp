#include<cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int x = a;
	int y = b;
	while (y > 0)
	{
		int z = x % y;
		x = y;
		y = z;
	}
	long long c = (long long) (a * b) / x;
	printf("%lld", c);
	return 0;
}