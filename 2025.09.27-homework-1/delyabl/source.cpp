#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int x = b / a;
	int y = b % a;
	int z = a - (b % a);
	if (y == 0) {
		z = 0;
	}
	else {
		z = a - (b % a);
	}
	printf("%d %d %d", x, y, z);
	return 0;
}