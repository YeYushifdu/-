#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//printf("c:\test\test.c");
	//printf("%c", '\130');    //8���Ƶ�130ת��Ϊʮ����
	//X��ASCII��ֵ��88
	//���Ҫ��ӡ��A����ASCII���Ӧ65���˽���Ϊ101
	//printf("%c\n", '\101');
	//printf("%c\n", '\x30');    //16���Ƶ�30ת��Ϊʮ����48����Ӧ�ַ���0��
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}