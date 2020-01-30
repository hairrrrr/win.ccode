//�������

//Problem Description
//����n���������������Щ������ɵ�n�о���
//
//Input
//��һ������һ��������N��N <= 20������ʾ����Ҫ���������������
//������������N��������
//
//Output
//�����������Ϊ����������й��ɵ�n�����ݡ�
//
//Sample Input
//5
//3 6 2 5 8
//Sample Output
//3 6 2 5 8
//8 3 6 2 5
//5 8 3 6 2
//2 5 8 3 6
//6 2 5 8 3

#include<stdio.h>

void matrix(int* arr, int n);//����Ľⷨ���������
void matrix_any(int* arr, int N, int n);//�õ�����Ҫ��˳����һ�п�����

int main() {

	int N = 0;
	int i = 0;

	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	matrix(arr, N);//���ַ������Ӹ�Ч

	printf("\nwant one row only: input a row\n");
	int n = 0;
	scanf("%d", &n);
	matrix_any(arr, N, n);

	free(arr);
	return 0;
}

void matrix(int* arr, int n) {

	int i, j, k;
	int* tmp = (int*)malloc(sizeof(int) * n);//������ʱ���飬��֤���ı�arr�����ԭʼ˳��

	for (i = 0; i < n; i++)
		tmp[i] = arr[i];

	for (i = 0; i < n; i++) {
		if (i != 0) {
			k = tmp[n - 1];//�ŵ���λ����
			for (j = n - 2; j >= 0; j--) {
				tmp[j + 1] = tmp[j];
			}
			tmp[0] = k;
		}
		for (j = 0; j < n; j++)
			printf("%d ", tmp[j]);
		printf("\n");
	}
}

void matrix_any(int* arr, int N, int n) {

	int i, j, k;
	int* tmp = (int*)malloc(sizeof(int) * N);

	if (n == 1) {
		for (i = 0; i < N; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else {
		for (j = N - n + 1, k = 0; j < N; j++, k++)
			tmp[k] = arr[j];

		for (j = 0; N - k > 0; j++, k++)
			tmp[k] = arr[j];

		for (k = 0; k < N; k++)
			printf("%d ", tmp[k]);
		printf("\n");
	}
	free(tmp);
}