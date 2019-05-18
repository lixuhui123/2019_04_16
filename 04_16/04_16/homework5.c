//#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
//不使用库函数讲一个字符串student a am i 变成 i am a student 
//void reverse_string(char * str, int i, int j)
//{
//	char tmp;
//
//	for (; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//void reverse_word(char * str)
//{
//	int i;
//	int start = 0, end = 0;
//
//	for (i = 0; str[i]; i++)
//	{
//		if (str[i] == ' ')
//		{
//			end = i - 1;
//			reverse_string(str, start, end);
//			start = i + 1;
//		}
//	}
//	reverse_string(str, start, i - 1);
//	reverse_string(str, 0, i - 1);
//}
//
//void reverse_word2(char * str)
//{
//	char tmp[256] = { 0 };
//	char * p;
//
//	while (p = strrchr(str, ' '))
//	{
//		strcat(tmp, p + 1);
//		strcat(tmp, " ");
//		*p = 0;
//	}
//	strcat(tmp, str);
//	strcpy(str, tmp);
//}
//
//int main()
//{
//	char str[] = "student a am i";
//	reverse_word(str);
//	puts(str);
//	system("pause");
//	return 0;
//}