#include<stdio.h>
//全局变量
int a=100;
int main()
{
	//局部变量
	//当局部变量和全局变量名字冲突的情况下，局部优先 
	//不建议把全局变量和局部变量命名成一样的 
	int a=10;
	printf("%d\n",a);
	return 0; 
 } 
