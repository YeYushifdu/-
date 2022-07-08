#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//do
//    循环语句;
//while (表达式);

int main() {
	int i = 1;
	do {
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}