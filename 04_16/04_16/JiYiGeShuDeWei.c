//#include<stdio.h>
//#include<stdlib.h>
////求一个数的二进制有几个1
//int BitOneCount(num)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		if (num&(1 << i))
//			++count;
//	}
//	return count;
//	/*int count = 0;
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//			count++;
//		num=num >> 1;
//	}
//	return count;*/
//}
//int main()
//{
//	int num = -10;
//	BitOneCount(num);
//	printf("%d\n", BitOneCount(num));
//	system("pause");
//	return 0;
//}