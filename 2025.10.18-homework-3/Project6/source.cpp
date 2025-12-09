#include<cstdio>
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int m = 0;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		int t = 0;
		scanf_s("%d", &t);
		if (t > 0)
		{
			c++;
			if (c > m)
			{
				m = c;
			}
		}
		else
		{
			c = 0;
		}
	}
	printf("%d", m);
	return 0;
}