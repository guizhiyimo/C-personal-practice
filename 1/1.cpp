#include<stdio.h>
//#ȫ�ֱ���
int global=20;
void text()
{
	printf("%d\n",global);
}
int main()//������-�������
{
	text();
	printf("a=%d\n",global);
	return 0;
}


