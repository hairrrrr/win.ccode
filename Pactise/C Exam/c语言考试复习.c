#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int i = 0;
//	int a[8] = { 8,7,6,5,4,3,2,1 };
//	int n = 0;
//	for (i = 0; i < 8; i++) {
//		if (i % 2 == 0)//һ��Ҫд�� == ������д�� = ����ס0 % 2 == 0������
//			continue;
//		n += a[i];
//	}
//	printf("%d", n);
//}
//����� ��� 1��1��2��4��7��13��24 ...ǰ30���������Ϊǰ����ͣ������������ÿ��6��
//int main() {
//	int arr[30];
//	int i = 0;
//	int count = 0;
//	arr[0] = 1;
//	arr[1] = 1;
//	arr[2] = 2;//��Ҫ��arrǰ��int ������
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
//����⡣����10����������һ��һά���飬�����������ĸ���
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
//����⡣��һ��4*4�ľ����и��е���СԪ��֮��
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
//�ж�һ���ַ����Ƿ�Ϊ���ģ�����������ͬ���������YES���������NOT
//����һ��
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
//}��������
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
