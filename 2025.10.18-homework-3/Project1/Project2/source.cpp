#include<cstdio>
int main(int argc, char** argv)
{
	double x = 0;
	double y = 0;
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	int d = 1;
	while (x < y)
	{
		x = x * 1.15;
		d++;
	}
	printf("%d", d);
	return 0;
}