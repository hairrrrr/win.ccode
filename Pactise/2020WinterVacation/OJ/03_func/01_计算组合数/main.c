//���������
//
//Problem Description
//�����������C(n, m), ��ʾ��n������ѡ��m�����������
//���㹫ʽ���£�
//����m = 0��C(n, m) = 1
//���� �� n = 1��C(n, m) = 1
//������m = n��C(n, m) = 1
//���� C(n, m) = C(n - 1, m - 1) + C(n - 1, m).
//
//
//
//Input
//��һ����������N����ʾ��N��Ҫ����������������N�У�ÿ����������n��m(0 <= m <= n <= 20)��
//
//Output
//���N�С�ÿ�����һ��������ʾC(n, m)��
//Sample Input
//3
//2 1
//3 2
//4 0
//Sample Output
//2
//3
//1

#include<stdio.h>

int C(int n, int m);

int main() {

	int N = 0;
	int i = 0;
	int n, m;
	int result[10000];

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &n, &m);
		result[i] = C(n, m);
	}

	for (i = 0; i < N i++)
		printf("%d\n", result[i]);



	return 0;
}

int C(int n, int m) {

	if (m == 0)
		return 1;
	else {
		if (n == 1)
			return 1;
		if (n == m)
			return 1;
		else
			return (C(n - 1, m - 1) + C(n - 1, m));
	}
}