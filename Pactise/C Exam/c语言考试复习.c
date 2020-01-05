#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int i = 0;
//	int a[8] = { 8,7,6,5,4,3,2,1 };
//	int n = 0;
//	for (i = 0; i < 8; i++) {
//		if (i % 2 == 0)//一定要写成 == ，不能写成 = 。记住0 % 2 == 0！！！
//			continue;
//		n += a[i];
//	}
//	printf("%d", n);
//}
//编程题 输出 1，1，2，4，7，13，24 ...前30项（第四项起为前三项和）分五行输出，每行6个
//int main() {
//	int arr[30];
//	int i = 0;
//	int count = 0;
//	arr[0] = 1;
//	arr[1] = 1;
//	arr[2] = 2;//不要给arr前加int ！！！
//	for (i = 3; i < 30; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
//	}
//	for (i = 0; i < 30; i++) {
//		printf("%d  ", arr[i]);
//		count++;
//		if (count == 5) {
//			printf("\n");
//			count = 0;
//		}
//	}
//	return 0;
//}
//编程题。输入10个整数存入一个一维数组，求其中奇数的个数
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//  int count = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 10; i++) {
//		if (arr[i] % 2 != 0)
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}
//编程题。求一个4*4的矩阵中各行的最小元素之和
//int main() {
//	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int min = 0;
//	for (i = 0; i < 4; i++) {
//		min = arr[i][0];
//		for (j = 1; j < 4; j++)
//			if (min > arr[i][j])
//				min = arr[i][j];
//		sum += min;
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//判断一个字符串是否为回文（正序逆序相同）是则输出YES，否则输出NOT
//方法一：
//int main() {
//	char str[20] = {0};
//	char str_reverse[20] = {0};
//	int i = 0;
//	char temp = 0;
//	int len = 0;
//	scanf("%s", str);
//	strcpy(str_reverse, str);
//	len = strlen(str);
//	for (i = 0; i < len/ 2; i++) {
//		temp = str_reverse[len - 1 - i];
//		str_reverse[len - 1 - i] = str_reverse[i];
//		str_reverse[i] = temp;
//	}
//  str_reverse[len] = '\0';
//	if (strcmp(str, str_reverse) == 0)
//		printf("YES\n");
//	else
//		printf("NOT\n");
//	return 0;
//}方法二：
//int main() {
//	char str[20] = { 0 };
//	char str_r[20] = { 0 };
//	int i = 0;
//	int j = 0;
//	int len = 0;
//	scanf("%s", str);
//	len = strlen(str);
//	for (i = 0, j = len - 1; str[i] != '\0'; i++, j--)
//		str_r[j] = str[i];
//	str_r[len] = '\0';
//	if (strcmp(str, str_r) == 0)
//		printf("YES\n");
//	else
//		printf("NOT\n");
//	return 0;
//}
