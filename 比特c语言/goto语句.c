#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main() {
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���60s�ڹػ���������룺stop  ��ȡ���ػ�
//shutdown -s -t 60  ִ��60s�ػ�
//shutdown -a  ȡ���ػ�
int main() {
	char input[20] = { 0 };
	//system()--ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("���Խ���60s�ڹػ������룺stop��ȡ���ػ�");
	scanf("%s", input);
	//if (input == "stop") {    //�����ַ����Ƚϲ���ʹ��"==",Ӧ��ʹ��strcmp()
	if(strcmp(input,"stop")==0){
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}