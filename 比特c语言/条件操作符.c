#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//exp1?exp2:exp3
//exp1成立，exp2计算，整个表达式的结果是exp2
//exp1不成立，exp3计算，整个表达式的结果是exp3
//int main() {
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//	return 0;
//}
//int main() {
//	int a = 0, b = 3, c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式从左向右依次计算
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);    //方括号为下标引用操作符
//	return 0;
//}
//int main() {
//	//调用函数的时候，函数名后面的圆括号就是函数调用操作符
//	printf("%d", 100);
//	return 0;
//}
//常见关键字
//auto
//int main() {
//	{
//		int a = 10;    //自动创建，自动销毁-自动变量
//		//原本是auto int，auto省略掉了
//	}
//	return 0;
//}
