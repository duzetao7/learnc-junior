#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//首先产生1000-2000的数
//	//接着判断是否闰年1.能被4整除且不能被100整除，2.能被400整除
//	
//	int i = 0;
//	int count = 0;//个数
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((0 == i % 4 && 0 != i % 100) || 0 == i % 400)
//		{
//			printf("%d ", i);
//			count++;
//			if (0 == count % 20)
//				printf("\n");//每行20个
//		}
//	}
//	printf("\ncount is %d\n", count);
//	return 0;
//}


#include <stdio.h>//函数写法
#include <math.h>
int is_leap_year(int i)
{
	//if ((0 == i % 4 && 0 != i % 400) || 0 == i % 400)
	//{
	//	return 1;
	//}
	//else
	//	return 0;
	return ((0 == i % 4 && 0 != i % 400) || 0 == i % 400);//改进，真-返回1，假返回0，666啊
}
int main()
{
	int n = 0;
	int count = 0;
	printf("1000-2000的闰年有：\n");
	for (int i = 1000; i <= 2000; i++)
	{
		if (1 == is_leap_year(i))
		{
			printf("%d ", i);
			count++;
			if (count % 20 == 0)//10个一行
			{
				printf("\n");
			}
		}

	}
	printf("\n%d个", count);
	return 0;
}