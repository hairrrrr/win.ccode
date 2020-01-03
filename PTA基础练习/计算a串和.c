#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa++⋯+aa⋯a（n个a）之和。

输入格式：
输入在一行中给出不超过9的正整数a和n。

输出格式：
在一行中按照“s = 对应的和”的格式输出。
*/
int main() {
	int num = 0;//重复数字
	int count = 0;//最高叠加几次
	int sum = 0;
	int upnum = 0;
	printf("calculate sum of array a+aa+aaa+......\nInput num and times(both <= 9)\n");
	scanf("%d %d", &num, &count);
	upnum = num;
	while (count) {
		sum += upnum;
		upnum = upnum * 10 + num;
		count--;
	}
	printf("s = %d\n", sum);
}