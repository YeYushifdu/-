#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main() {
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}*/
//�ж�һ�����Ƿ�Ϊ����
/*int main() {
	int a = 10;
	if (1 == a % 2) {
		printf("����\n");
	}
	else {
		printf("������\n");
	}
	return 0;
}*/
//���1-100֮�������
//int main() {
//	int i;
//	for (i = 1; i <= 100; i++) {
//		if (1 == i % 2) {
//			printf( "%d ", i );
//		}
//	}
//	return 0;
//}
//switch (���ͱ��ʽ) {
//	�����;
//}
////������һЩcase���
//case ���ͳ������ʽ;
//	���;
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//	//case������ڣ�break��������
//	//�����break��˳�����֮�������
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
// while�﷨�ṹ�����ʽΪ����ִ��ѭ�����
//while (���ʽ)
//    ѭ�����;
//
////��ѭ��
//int main() {
//	while (1)
//		printf("hehe\n");    //һֱ��ӡhehe
//	return 0;
//}
//��ӡ1-10
int main() {
	int i = 1;
	while (i <= 10) {
		if (5 == i)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}

