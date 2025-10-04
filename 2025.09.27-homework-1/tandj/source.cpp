#include<cstdio>

int main(int argc, char** argv)
{
	long long a = 0;
	long long b = 0;
	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	printf("%lld", ((a - 1) * (b - 1) + 1));
	return 0;
}