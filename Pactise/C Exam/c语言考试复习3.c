#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//输出数组中第n位学生的总成绩
//void aver(int arr[3][4], int n) {
//	int i = 0;
//	int sum = 0;
//	int* pa = arr;
//	pa += (n - 1) * 4;
//	for (i = 0; i < 4; i++)
//			sum += *pa;
//	printf("%d", sum);
//}
//int main() {
//	int arr[3][4] = { {1,1,1,1},{2,2,2,2},{3,3,3,3}};
//	aver(arr, 2);
//}
//strcpy实现
//void copy(char *from, char *to) {
//	while (*to++ = *from++);
//}
//int main() {
//	char* a = "I Love China";
//	char b[] = "I Love China so much!";
//	char* pb = b;
//	copy(a, b);
//	printf("a:%s\nb:%s", a, pb);
//}
//辗转相除法
//int gcd(int a, int b) {
//	int tem = 0;
//	if (a < b) {
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	while (b) {
//		tem = a % b;
//		a = b;
//		b = tem;
//	}
//	return a;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d\n", gcd(a, b));
//}
//分段函数
//#include<stdio.h>
//#include<math.h>
//int main() {
//	double y;
//	double x = 0;
//	scanf("%lf", &x);
//	if (x <= 0)
//		y = 0;
//	else if (x <= 10)
//		y = 2 * x;
//	else
//		y = sqrt(x) + 1;
//	printf("f(%.1f) = %.2f\n", x, y);
//}
//求近似解
//#include<stdio.h>
//int main() {
//	int i = 0;
//	int count = 0;
//	double sum = 1;
//	double a = 1;
//	int sign = -1;
//	for (i = 2; a >= 1e-5;i++) {
//		count++;
//		a = 1.0 / ((double)i * ((double)i - 1));
//		sum += a*sign;
//		sign *= -1;//sign 的思想很重要！
//	}
//	printf("sum = %f  执行了%d次\n", sum, count);
//}
//10个个学生成绩，从小到大排序并输出
//int main() {
//	int arr[10] = { 1 ,3, 5,7,9,2,4,6,8,10 };
//	int temp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = i+1; j < 9; j++) {
//			if (arr[i] > arr[j]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		
//		}
//		printf("%d ", arr[i]);//用选择法可以排好直接输出
//	}	
//}

