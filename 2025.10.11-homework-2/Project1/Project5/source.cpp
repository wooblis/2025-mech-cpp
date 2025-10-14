#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	bool t = true;
	if (a != 0)
	{
		printf("%d", a);
		t = false;
	}
	if (b != 0)
	{
	    if (!t)
		{
			if (b > 0)
			printf("+");
		}
		if (b == -1)
		{
			printf("-");
		}
		else if (b != 1)
		{
			printf("%d", b);
		}
		printf("x");
		t = false;
	}
	if (c != 0)
	{
		if (!t)
		{
			if (c > 0)
				printf("+");
		}
		if (c == -1)
		{
			printf("-");
		}
		else if (c != 1)
		{
			printf("%d", c);
		}
		printf("y");
		t = false;
	}
	if (t)
	{
		printf("0");
	}
	return 0;
}