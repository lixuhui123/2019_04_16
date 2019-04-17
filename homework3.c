#include<stdio.h>
#include<stdlib.h>

int main()
{
#if 0
	int a = 0;
	int b = 0;
	int min = 0;
	int i = 0;
	int max = 0;

	printf("请输入两个数");
	scanf_s("%d%d", &a,&b);
	for (i = 2; i <=( min = a < b ? a : b);i++)
	{
		if (0 == a % i && 0 == b % i)
			max = i;
	}
	if (0 == max)
		printf("两个数互质");
	else
		printf("两个数的最大公约数是%d\n", max);
#endif
	int a = 0, b = 1;
	int* p = &a;
	int* q = &b;
	printf("a=%d,b=%d\n", *q, *p);
	system("pause");
	return 0;
}