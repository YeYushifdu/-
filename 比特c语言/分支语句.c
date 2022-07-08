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
//判断一个数是否为奇数
/*int main() {
	int a = 10;
	if (1 == a % 2) {
		printf("奇数\n");
	}
	else {
		printf("非奇数\n");
	}
	return 0;
}*/
//输出1-100之间的奇数
//int main() {
//	int i;
//	for (i = 1; i <= 100; i++) {
//		if (1 == i % 2) {
//			printf( "%d ", i );
//		}
//	}
//	return 0;
//}
//switch (整型表达式) {
//	语句项;
//}
////语句项：是一些case语句
//case 整型常量表达式;
//	语句;
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//	//case决定入口，break决定出口
//	//如果无break则顺序输出之后的所有
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
// while语法结构：表达式为真则执行循环语句
//while (表达式)
//    循环语句;
//
////死循环
//int main() {
//	while (1)
//		printf("hehe\n");    //一直打印hehe
//	return 0;
//}
//打印1-10
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

