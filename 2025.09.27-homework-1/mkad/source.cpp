#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	const int x = 109;
	int y = a * b;
	int c = 1;
	int z = (c - 1 + y) % x;
	if (z < 0) {
		z += x;
	}
	z += 1;
	printf("%d", z);
	return 0;
}