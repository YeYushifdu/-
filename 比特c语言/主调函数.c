#include <stdio.h>
#include "twj.h"    //自己新建的头文件加双引号，必须放在同一目录下
 
int main(void)    //main()入口函数的函数定义，它的原型与调用一定在这个IDE的某处
{
	hs(CL);    //函数调用，把常量实际参数传递到栈区域，等待拷贝到被调函数使用
	return 0; 
 } 
 

