#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Add(int* p) {
	(*p)++;
}
int main() {
	int num = 0;
	Add(&num);
	printf("%d\n", num);    //1

	Add(&num);
	printf("%d\n", num);    //2

	Add(&num);
	printf("%d\n", num);    //3
	return 0;
}