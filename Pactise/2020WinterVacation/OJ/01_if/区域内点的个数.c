#define _CRT_SECURE_NO_WARNINGS 1

//�����ڵ�ĸ���

//Problem Description
//X����˯���ŵ�ʱ��ϲ�����ֻ���Ҳ��ϲ������Ϸ����ϲ�������ǡ�
//
//Input
//�������롣
//
//ÿ��������һ������N(N <= 10000)���������������������ε����µ�B��x, y�������ϵ�T(x, y)��Ȼ������N����X��Y������ο����ǡ����ж��ٿ������ڴ����ڲ����ڴ����ϵĲ��ơ�
//
//Output
//���һ�������������ж��ٿ������ڴ����ڲ���
//
//Sample Input
//3
//0 1
//3 4
//1 1
//2 2
//3 3
//2
//1 1
//5 5
//4 4
//0 6
//Sample Output
//1
//1

#include<stdio.h>
#include<math.h>

int main() {

	int N = 0;
	int X1, Y1;
	int X2, Y2;
	int i = 0;
	int count = 0;

	printf("input the number of the coordinate you wang to judge\n");
	scanf("%d", &N);

	printf("input two counter-diagonal's coordinate(x,y)(format:0 1 ) \n");
	scanf("%d %d", &X1, &Y1);
	scanf("%d %d", &X2, &Y2);
	
	//N = 0 ���������꣬�ڲ��ĵ���Ȼ��0�� С��0�Ƿ�����ΪҲ��0
	if (N > 0) {
		
		//��������֮����ڵ���2���������Χ�ɵľ����ڲ��Ż�����������
		if (abs(X1 - X2) >= 2 && abs(Y1 - Y2) >= 2) {
			
			int x_max, x_min;
			int y_max, y_min;
			
			//�жϺ�������Ľϴ�ֵ���Сֵ
		/*	if (X1 > X2) {
				x_max = X1;
				x_min = X2;
			}
			else {
				x_max = X2;
				x_min = X1;
			}
			if (Y1 > Y2) {
				y_max = Y1;
				y_min = Y2;
			}
			else {
				y_max = Y2;
				y_min = Y1;
			}*/
			//��һ��˼�������εĸ��Խ��� ���Ͻǵ����겻��x����y�������µĴ�
			//���Լ�һ��
			if (X1 > X2) {
				x_max = X1;
				x_min = X2;
				y_max = Y1;
				y_min = Y2;
			}
			else
			{
				x_max = X2;
				x_min = X1;
				y_max = Y2;
				y_min = Y1;
			}

			printf("input judge-coordinate\n");
			for (i = 0; i < N; i++) {
				
				int x, y;
				scanf("%d %d", &x, &y);
				if ((x < x_max && x > x_min) && (y > y_min&& y < y_max))
					count++;
			}
			printf("%d", count);
		}
		else
			printf("0\n");
	}
	else
		printf("0\n");

	return 0;
}
