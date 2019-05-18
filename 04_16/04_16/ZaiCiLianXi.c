//不使用库函数将一个字符串student a am i 变成 i am a student 
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* str, int i, int j)//翻转一个字符串
{
	char tmp ;
	for (; i < j; ++i, --j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}

}
void reverse_word(char* str)//将目标字符串以单词为最小单元逆置
{
	int i = 0;
	int start = 0, end = 0;
	for (i = 0; str[i]; ++i)
	{
		if (str[i] == ' ')//以空格为判断条件
		{
			end = i - 1;//i现在指向空格，要逆置字符串需要将end前移一位。
			reverse_string(str, start, end);
			start = i + 1;
		}
		
	}
	reverse_string(str, start, i - 1);//最后一个单词后面没有空格，所以要手动传参逆置。
	reverse_string(str, 0, i - 1);//将整个字符串都逆置一次，就会的得到结果。
}
int main()
{
	char str[] = "student a am i";
	reverse_word(str);
	puts(str);
	system("pause");
	return 0;
}