#include <stdio.h>
int main()
{
	//字符数组-数组是一组同类型的元素
	char arr[]="hello"; 
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	//求字符串长度
	int len=strlen("abc");
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
//	printf("%d\n",len); 
//	printf("%s\n",arr1);
//	printf("%s\n",arr2); 
	return 0;
 } 
