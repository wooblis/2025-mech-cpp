#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	int c = 0;
	if (a == 1)
	{
		c = 0;
	}
	else if (a % 2 == 0)
	{
		c = a / 2;
	}
	else
	{
		c = a;
	}
	printf("%d", c);
	return 0;
}