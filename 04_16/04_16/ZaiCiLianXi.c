//��ʹ�ÿ⺯����һ���ַ���student a am i ��� i am a student 
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* str, int i, int j)//��תһ���ַ���
{
	char tmp ;
	for (; i < j; ++i, --j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}

}
void reverse_word(char* str)//��Ŀ���ַ����Ե���Ϊ��С��Ԫ����
{
	int i = 0;
	int start = 0, end = 0;
	for (i = 0; str[i]; ++i)
	{
		if (str[i] == ' ')//�Կո�Ϊ�ж�����
		{
			end = i - 1;//i����ָ��ո�Ҫ�����ַ�����Ҫ��endǰ��һλ��
			reverse_string(str, start, end);
			start = i + 1;
		}
		
	}
	reverse_string(str, start, i - 1);//���һ�����ʺ���û�пո�����Ҫ�ֶ��������á�
	reverse_string(str, 0, i - 1);//�������ַ���������һ�Σ��ͻ�ĵõ������
}
int main()
{
	char str[] = "student a am i";
	reverse_word(str);
	puts(str);
	system("pause");
	return 0;
}