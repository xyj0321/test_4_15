#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ˮ��һƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�����ԺͶ���ƽ��ˮ
int main()
{
	int money = 0;//Ǯ
	scanf("%d",&money);
	int total = 0;//�ȵ�����ˮ
	int empty = 0;//��ƿ
	//���������ˮ
	total = money;
	empty = money;
	//����������ˮ
	while (empty / 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}