#define _CRT_SECURE_NO_WARNINGS
//break-循环语句
//char-字符类型
//const-常变量
//enum-枚举
//extern-声明外部符号
//signed-有符号的    unsigned-无符号的
//case continue default do double else float for goto if int long while
//return short sizeof static struct switch typeof union void volatile 
// 
//register-寄存器关键字
//网盘-2T
//硬盘-500G
//内存-8G
//高速缓存-几十MB
//寄存器-更小（造价越高，速度越快，空间越小）
//int main() {
//	//大量/频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;    //建议num的值存放在寄存器中
//	return 0;
//}
//typedef unsigned int u_int;    //类型重命名
//int main() {
//	//unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}
//static-静态的
//修饰局部变量
void test()
{
	static int a = 1;    //使用上一次保留下来的a，出范围不销毁
	a++;
	printf("%d ", a);
}
int main() {
	int i = 0;
	while (i < 10)
	{
		test();    //打印2至11
		i++;
	}
	return 0;
}