#include<cstdio>
int main(int argc, char** argv)
{
	int n = 0;
	int m1 = -1;
	int m2 = -1;
	do
	{
		scanf_s("%d", &n);
		if (n == 0) break;
		if (n >= m1)
		{
			m2 = m1;
			m1 = n;
		}
		else if (n > m2)
		{
			m2 = n;
		}
	} while (n != 0);
	printf("%d", m2);
	return 0;
}