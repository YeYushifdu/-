#define _CRT_SECURE_NO_WARNINGS
//break-ѭ�����
//char-�ַ�����
//const-������
//enum-ö��
//extern-�����ⲿ����
//signed-�з��ŵ�    unsigned-�޷��ŵ�
//case continue default do double else float for goto if int long while
//return short sizeof static struct switch typeof union void volatile 
// 
//register-�Ĵ����ؼ���
//����-2T
//Ӳ��-500G
//�ڴ�-8G
//���ٻ���-��ʮMB
//�Ĵ���-��С�����Խ�ߣ��ٶ�Խ�죬�ռ�ԽС��
//int main() {
//	//����/Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;    //����num��ֵ����ڼĴ�����
//	return 0;
//}
//typedef unsigned int u_int;    //����������
//int main() {
//	//unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}
//static-��̬��
//���ξֲ�����
void test()
{
	static int a = 1;    //ʹ����һ�α���������a������Χ������
	a++;
	printf("%d ", a);
}
int main() {
	int i = 0;
	while (i < 10)
	{
		test();    //��ӡ2��11
		i++;
	}
	return 0;
}