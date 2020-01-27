//方法4：欧拉筛法（线性筛法）
//思路: 用欧拉筛法求出整个范围的“判断素数数组”，然后用二分法寻找目标数

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define N  (int)1e+5//程序可以判断任意一个从 1 到 100000 的数是否为素数
					//用 e 表示的指数为double类型

void testPrime();
void PrimeList(int* Prime, bool* isPrime, int n);//打印范围内数组
int SearchPrime(bool* isPrime, int n);//二分法寻找目标数

int main() {

	testPrime();
	return 0;

}

void testPrime() {

	int n = 0;

	int* Prime = (int*)malloc(sizeof(int) * (N + 1));//存放素数数组
	bool* isPrime = (int*)malloc(sizeof(int) * (N + 1));//存放数字是否为素数数组

	printf("input a target number within %d\n ", N);
	scanf("%d", &n);

	PrimeList(Prime, isPrime, n);

	int YesOrNo = SearchPrime(isPrime, n);
	if (YesOrNo == true)
		printf("YES\n");
	else if (YesOrNo == false)
		printf("NOT\n");

	free(Prime);
	free(isPrime);
}

void PrimeList(int* Prime, bool* isPrime, int n) {

	int i = 0;
	int j = 0;
	int count = 0;

	if (isPrime != NULL) {//确保isPrime不是空指针
		//将isPrime数组初始化为 1
		for (i = 2; i <= N; i++) {
			isPrime[i] = true;
		}
		isPrime[1] = false;//单独讨论
	}



	if (isPrime != NULL && Prime != NULL) {
		//从2遍历到范围上限N
		for (i = 2; i <= N; i++) {
			if (isPrime[i])//如果下标（下标对应着1 ~ 范围上限N）对应的isPrime值没有被置为false，说明这个数是素数，将下标放入素数数组
				Prime[count++] = i;
			//循环控制表达式的意义：j小于等于素数数组的个数 或 素数数组中的每一个素数与 i 的积小于范围上限N
			for (j = 0; (j < count) && (Prime[j] * (long long)i) <= N; j++)//将i强制转换是因为vs上有warning，要求转换为宽类型防止算术溢出。数据上不产生影响
			{
				isPrime[i * Prime[j]] = false;//每一个素数的 i 倍（i >= 2）都不是素数，置为false

				//这个是欧拉筛法的核心，它可以减少非素数置false的重复率
				//意义是将每一个合数（非素数）拆成 2（最小因数）与最大因数 的乘积
				if (i % Prime[j] == 0)
					break;
			}
		}
	}
	//for (i = 1; i <= N; i++) {
	//	printf("%d - %d\n", i, isPrime[i]);
	//}
}

int SearchPrime(bool* isPrime, int n) {

	int left = 1;
	int right = N;
	int mid = 0;
	//小于等于零讨论素数没有意义
	if (n <= 0) {
		printf("illegal input!\n");
		return -1;
	}
	//二分法查找数n也就是isPrime数组下标
	while (right >= left) {
		mid = (left + right) / 2;
		if (n > mid)
			left = mid + 1;
		if (n < mid)
			right = mid - 1;
		if (n == mid) {
			return isPrime[mid];
			break;
		}
	}
	//目标数可能大于上限N
	if (right < left)
		printf("not found!\n");
	return -1;
}