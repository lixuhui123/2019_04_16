////这个函数的返回值value的二进制位模式从左到右翻转后的值。
////
////如：
////在32位机器上25这个值包含下列各位：
////00000000000000000000000000011001
////翻转后：（2550136832）
////10011000000000000000000000000000
////程序结果返回：
////2550136832
//#include <stdio.h>
//#include <math.h>
//#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int sum = 0;
//	int b = 0;
//	for (i = 0; i < 32; i++)
//	{
//		b = ((value >> i) & 1)*pow(2, 31 - i);
//		sum += b;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);//%u是输入输出格式说明符，表示按unsigned int格式输入或输出数据2此处一定要用%u而不是%d的，因为若最高位为1，ret代表的是有符号数，其结果为负数    
//	system("pause");
//	return 0;
//}
