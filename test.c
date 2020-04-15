#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水，一瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以和多少平汽水
int main()
{
	int money = 0;//钱
	scanf("%d",&money);
	int total = 0;//喝掉的汽水
	int empty = 0;//空瓶
	//买回来的汽水
	total = money;
	empty = money;
	//换回来的汽水
	while (empty / 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}