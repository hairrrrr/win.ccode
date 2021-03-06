﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
问题描述:
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，
 他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，
 把其余相同的数去掉，不同的数对应着不同的学生的学号。
 然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
输入格式:
输入有2行，第1行为1个正整数，表示所生成的随机数的个数N。第2行有N个用空格隔开的正整数，为所产生的随机数。
输出格式
输出也是2行，第1行为1个正整数M，表示不相同的随机数的个数。第2行为M个用空格隔开的正整数，为从小到大排好序的不相同的随机数。
样例输入
10
20 40 32 67 40 20 89 300 400 15
样例输出
8
15 20 32 40 67 89 300 400
*/
#include<time.h>
int main() {
	int arr[1001] = { 0 };//初始化为0
	int n = 0;
	int j = 0;
	int count = 0;//记录不重复数的个数
	srand((unsigned int)time(NULL));
	printf("Input the random number between 1 and 1000\n");
	scanf("%d", &n);
	int arr_ran[n] = { 0 };
	for (j = 0; j < n; j++) {
		arr_ran[j] = rand() % 1000 + 1;
		printf("%d  ", arr_ran[j]);
		if (arr[arr_ran[j]] == 0) {
			arr[arr_ran[j]] = arr_ran[j];
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 1; i <= 1000; i++) {
		if (arr[i] != 0)
			printf("%d  ", arr[i]);
	}
	
}
