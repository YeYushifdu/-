#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() {
	printf("****************************\n");
	printf("********** 1.play *********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}

void game() {

}

int main() {
	int input = 0;
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input) {
			case 1:
				game();		//ɨ����Ϸ
				printf("ɨ����Ϸ\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}