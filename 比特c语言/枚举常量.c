#include<stdio.h>
enum Sex
{
	MALE=3,    //����ֵ 
	FEMALE,
	SECRET    //ö�ٱ�����δ������ȡֵ 
};
 
int main()
{
	enum Sex s=MALE;
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET); 
	return 0;
}
