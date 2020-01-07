#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int x = 85;
//	char y = 'D';
//	if (x >= 0 && x <= 100)
//		if (x < 60)
//			y = 'C';
//		else if (x >= 60)
//			y = 'B';
//		else if (x >= 80)
//			y = 'A';
//	printf("%c", y);//输出 B 说明if判断到符合的条件就跳过剩下的判断。
//}
//编写程序。输出1，2，5，14，41的前20项和。（从第2项开始每一项为前一项的三倍减去一）分四行输出，每行输出五个
//int main() {
//	int i = 0;
//	int arr[20] = {0};
//	arr[0] = 1;
//	for (i = 1; i < 20; i++)
//		arr[i] = 3 * arr[i - 1] - 1;
//	for (i = 0; i < 20; i++) {
//		printf("%d  ", arr[i]);
//		if ((i + 1) % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}
//编程题。求一维数组中最大元素与最小元素的平方和
//int main() {
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	max = arr[0];
//	min = arr[0];
//	for (i = 1; i < 10; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//	}
//	printf("%d", max * max + min * min);
//	return 0;
//}
//编写函数，统计字符串中非空格字符个数。
//int main() {
//	char str[20] = "I Love China";
//	int NoSpace(char str[20]);//数组形式char后不要加*
//	printf("%d", NoSpace(str));
//}
//int NoSpace(char str[20]) {
//	int count = 0;
//	while (*str != '\0') {
//		if (*str != ' ')
//			count++;
//		str++;
//	}
//	return count;
//}
//编写函数。数组中存贮长度为n的有序数列，数组长度大于n。将整数k插入有序数列的合适位置，使得有序数列仍然有序
//void insert(int arr[20], int n, int k) {
//	int pos = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//		if (arr[i] > k)
//			break;
//	pos = i;
//	while (n - 1 >= i) {
//		arr[n] = arr[n - 1];
//		n--;
//	}
//	arr[pos] = k;
//}
//int main() {
//	int i = 0;
//	int arr[20] = { 0 };
//	int n = 0;
//	int k = 0;
//	printf("请输入一个有序数组，请在输入数组前先输入一个空格\n");
//	while (getchar() != '\n') {
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	n = i;
//	printf("请输入你想插入的数\n");
//	scanf("%d", &k);
//	insert(arr, n, k);
//	for (i = 0; i < n+1; i++)
//		printf("%d", arr[i]);
//}