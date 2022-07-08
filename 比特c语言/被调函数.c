#include <stdio.h>
#include "twj.h"    //自己新建的头文件加双引号，必须放在同一目录下
 void hs(char ch)    //被调函数，除了主函数之外的其它函数定义，这里要在括号加入一个形参名
 {
 	int i;
 	for(i=0;i<SIZE;i++)
 	{
 		printf("%c",ch);
	 }
	 putchar('\n');    //打印一个回车 
  } 
  
