#include<stdio.h>
enum Sex
{
	MALE=3,    //赋初值 
	FEMALE,
	SECRET    //枚举变量的未来可能取值 
};
 
int main()
{
	enum Sex s=MALE;
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET); 
	return 0;
}
