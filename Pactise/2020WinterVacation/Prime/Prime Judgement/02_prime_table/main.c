//方法2：用素数表来判断素数
//思路：如果一个数不能整除比它小的任何素数，那么这个数就是素数
//
//这种“打印”素数表的方法效率很低，不推荐使用，可以学习思想

#include<stdio.h>

#define N (int)1e+1

void testPrime();
int isPrime(int target, int count, int* PrimeArray);//“打印”素数表
int SearchBisection(int* isPrimeArray, int up_bound, int target);//二分法查找目标数

int main() {

	testPrime();
	return 0;
}

void testPrime() {

	int* isPrimeArray = (int*)malloc(sizeof(int) * (N + 1));
	int* PrimeArray = (int*)malloc(sizeof(int) * N);
	//如你所见，这里我们为两个数组在堆中开辟了空间。
	//第一个数组 isPrimeArray 是用来 存储范围内所有数是否为素数的信息，（是放1不是放0，用下标对应每一个数），所以开辟的空间应该是素数大小 + 1
	//第二个数组 PrimeArray 用来存放素数表，它的大小其实远小于范围N
	int i = 0;
	int target = 0;
	int count = 0;//存放当前素数数组种的素数个数
	int yes_or_no = 0;

	printf("input a number within %d\n", N);
	scanf("%d", &target);

	for (i = 2; i <= N; i++) {
		isPrimeArray[i] = 0;//判断前将所有数判定为非素数
		if (isPrime(i, count, PrimeArray)) {
			PrimeArray[count++] = i;
			isPrimeArray[i] = 1;//判断i 为素数
		}
	}

	yes_or_no = SearchBisection(isPrimeArray, N, target);

	if (yes_or_no == 1)
		printf("YES\n");
	else if (yes_or_no == 0)
		printf("NOT\n");

	free(isPrimeArray);
	free(PrimeArray);
}

int isPrime(int target, int count, int* PrimeArray) {

	int i = 0;
	for (i = 0; i < count; i++) {
		if (target % PrimeArray[i] == 0)
			return 0;
	}

	return 1;
}

int SearchBisection(int* isPrimeArray, int up_bound, int target) {

	int left = 2;
	int right = up_bound;
	int mid = 0;

	//小于等于1讨论素数没有意义
	if (target <= 1) {
		printf("illegal input!\n");
		return -1;
	}

	//target也就是isPrimeArray数组的下标
	while (right >= left) {
		mid = (left + right) / 2;
		if (target > mid)
			left = mid + 1;
		if (target < mid)
			right = mid - 1;
		if (target == mid) {
			return isPrimeArray[mid];
			break;
		}
	}
	//目标数可能大于上限N
	if (right < left)
		printf("not found!\n");
	return -1;

}