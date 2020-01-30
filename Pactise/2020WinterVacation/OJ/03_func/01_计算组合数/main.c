//计算组合数
//
//Problem Description
//计算组合数。C(n, m), 表示从n个数中选择m个的组合数。
//计算公式如下：
//若：m = 0，C(n, m) = 1
//否则， 若 n = 1，C(n, m) = 1
//否则，若m = n，C(n, m) = 1
//否则 C(n, m) = C(n - 1, m - 1) + C(n - 1, m).
//
//
//
//Input
//第一行是正整数N，表示有N组要求的组合数。接下来N行，每行两个整数n，m(0 <= m <= n <= 20)。
//
//Output
//输出N行。每行输出一个整数表示C(n, m)。
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