#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//��ӡ�뾶λ1-10��Բ����������������100���򲻴�ӡ
//int main() {
//	int i = 0;
//	double s = 0;
//	for (i = 1; i <= 10; i++) {
//		s = 3.14 * i * i;
//		if (s > 100)
//			continue;
//		printf("%.2f ", s);
//	}
//}
//�����¶�ά����a���л�������ŵ���һ����ά����b
//  [1  2  3]      [1	4]
//a [       ]     b[2	5]
//  [4  5  6]      [3	6]
//int main() {
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			b[j][i] = a[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++)
//			printf("%d ", b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//������һ��3*3�ľ���������Խ����뷴�Խ���Ԫ�صĺ͡�
//�������������룬���㣬�����
//void input(int arr[3][3]) {
//	int i = 0;
//	int j = 0;
//	printf("����������arr[3][3]:\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//}
//int Sum(int arr[3][3]) {
//	int sum = 0;
//	sum = arr[0][0] + arr[1][1] + arr[2][2] + arr[0][2] + arr[2][0];
//	return sum;
//}
//void output(int sum) {
//	printf("���Խ����뷴�Խ���֮��Ϊ��%d\n", sum);
//}
//int main() {
//	int arr[3][3] = { 0 };
//	int sum = 0;
//	input(arr);
//	sum = Sum(arr);
//	output(sum);
//	return 0;
//}
//�������ַ������ַ���a����Ϊ��I am a teacher.�� �ַ���b������Ϊ��You are a student.��
//Ҫ�󣺽��ַ���b���������ӵ��ַ���a�ĺ��棬���ַ���a������Ϊ����I am a teacher.You are a student.��(ָ��ʵ��)
//int main() {
//	char str1[50] = "I am a teacher.";
//	char str2[50] = "You are a student.";
//	char* p1 = str1;
//	char* p2 = str2;
//	int len = 0;
//	len = strlen(str1);
//	p1 += len;
//	while (*p2 != '\0') {
//		*p1++ = *p2++;
//	}
//	*p1++ = '\0';
//	puts(str1);
//}
//int main() { 2 4 6 8
//	int i, c;
//	char num[][4] = { "CDEF","ACBD" };
//	for (i = 0; i < 4; i++) {
//		c = num[0][i] + num[1][i] - 2 * 'A';
//		printf("%3d", c);
//	}
//}
