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
//	printf("%c", y);//��� B ˵��if�жϵ����ϵ�����������ʣ�µ��жϡ�
//}
//��д�������1��2��5��14��41��ǰ20��͡����ӵ�2�ʼÿһ��Ϊǰһ���������ȥһ�������������ÿ��������
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
//����⡣��һά���������Ԫ������СԪ�ص�ƽ����
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
//��д������ͳ���ַ����зǿո��ַ�������
//int main() {
//	char str[20] = "I Love China";
//	int NoSpace(char str[20]);//������ʽchar��Ҫ��*
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
//��д�����������д�������Ϊn���������У����鳤�ȴ���n��������k�����������еĺ���λ�ã�ʹ������������Ȼ����
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
//	printf("������һ���������飬������������ǰ������һ���ո�\n");
//	while (getchar() != '\n') {
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	n = i;
//	printf("����������������\n");
//	scanf("%d", &k);
//	insert(arr, n, k);
//	for (i = 0; i < n+1; i++)
//		printf("%d", arr[i]);
//}