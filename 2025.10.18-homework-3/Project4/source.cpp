#include<cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 1;
	int m = 1;
	scanf_s("%d", &a);
	if (a == 0)
	{
		printf("0");
		return 0;
	}
	do
	{
		scanf_s("%d", &b);
		if (b == a)
		{
			c++;
			if (c > m)
			{
				m = c;
			}
		}
		else
		{
			c = 1;
		}
		a = b;
	} while (b != 0);
	printf("%d", m);
	return 0;
}