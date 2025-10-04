#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a % b == 0 || b % a == 0) {
		printf("1");
	}
	else {
		printf("7");
	}
	return 0;
}