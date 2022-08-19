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
		printf("请选择：>");
		scanf("%d", &input);
		switch(input) {
			case 1:
				game();		//扫雷游戏
				printf("扫雷游戏\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
	return 0;
}