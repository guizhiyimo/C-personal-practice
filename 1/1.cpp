#include<stdio.h>
//#全局变量
int global=20;
void text()
{
	printf("%d\n",global);
}
int main()//主函数-程序入口
{
	text();
	printf("a=%d\n",global);
	return 0;
}


