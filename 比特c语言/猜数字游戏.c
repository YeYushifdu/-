#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
//自动产生一个1-100之间的随机数
//猜数字：猜对了就恭喜；猜错了就告诉你猜大了还是猜小了，直到猜对
//可以一直玩，直到退出游戏

void menu() {
	printf("****************************\n");
	printf("********** 1.play **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}
void game() {    //猜数字游戏的实现
	//生成随机数   
	//rand函数返回了一个0-32767之间的数字
	//rand在被调用前就已经生成好了随机数

	int ret = rand()%100+1;    //%100的余数是0-99，然后+1，范围就是1-100
	//猜数字
}
int main() {
	int input = 0;
	//时间-时间戳
	srand((unsigned int)time(NULL));
	do
	{
		menu();    //打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("无效选择\n");
			break;
		}
	} while (input);
	return 0;
}