/**
*任务02_2字符转换
*孟菲菲
*680
*8班
*2017 03.18
*/
#include<stdio.h>

    int main(void)
{
	char x;
	char y;
	char z;
	printf("请输入三个小写字母x,y,z(字母间请以空格隔开):\n");
	scanf("%c %c %c",&x,&y,&z);
	printf("%c的ASIIC码是%d,大写字母是%c\n",x,x,x-32);
	printf("%c的ASIIC码是%d,大写字母是%c\n",y,y,y-32);
	printf("%c的ASIIC码是%d,大写字母是%c\n",z,z,z-32);
	return 0;
}