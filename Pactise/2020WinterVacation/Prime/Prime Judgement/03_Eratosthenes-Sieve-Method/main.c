//方法3：普通筛法——埃拉托斯特尼(Eratosthenes)筛法
//
//效率：判断前一千万的素数：0.3s
//      前1亿的素数3s
//	  前3亿的素数8~9s
//
//思路:我们的想法是，创建一个比范围大1的数组，我们只关注下标为 1 ~ N（要求的上限） 的数组元素与数组下标。
//   将数组初始化为1。然后用for循环，遍历范围为：【2 ~ sqrt(N)】。如果数组元素为1，则说名这个数组元素的下标所对应的数是素数。
//   随后我们将这个下标（除1以外）的整数倍所对应的数组元素全部置为0，也就是判断其为非素数。
//用百度百科对埃拉托斯特尼筛法简单描述：要得到自然数n以内的全部素数，必须把不大于 的所有素数的倍数剔除，剩下的就是素数。

#include<stdio.h>
#include<math.h>

#define N (int)1e+1

void testErat();
void EratPrime(int* isPrime, int upper_board);//判断范围内的数是否素数（是写入0，否写入1）
int SearchBisection(int* isPrime, int n);//二分查找目标数

int main() {

	testErat();
	return 0;

}

void testErat() {

	int n = 0;
	int yes_or_no = 0;
	int* isPrime = (int*)malloc(sizeof(int) * (N + 1));

	printf("input a target number within %d\n", N);
	scanf("%d", &n);

	EratPrime(isPrime, N);
	yes_or_no = SearchBisection(isPrime, n);

	if (yes_or_no == 1)
		printf("YES\n");
	if (yes_or_no == 0)
		printf("NOT\n");

	free(isPrime);
}

void EratPrime(int* isPrime, int upper_board) {

	int i = 0;
	int j = 0;
	//初始化isPrime
	for (i = 2; i <= upper_board; i++)
		isPrime[i] = 1;

	isPrime[1] = 0;
	isPrime[0] = 0;//1,0不是素数

	for (i = 2; i < sqrt(upper_board); i++) {
		if (isPrime[i]) {
			isPrime[i] = 1;
		}
		for (j = 2; i * j <= upper_board; j++) {//素数的n倍（n >= 2）不是素数
			isPrime[i * j] = 0;
		}
	}

}
int SearchBisection(int* isPrime, int n) {

	int left = 0;
	int right = N;
	int mid = 0;
	//小于等于零讨论素数没有意义
	if (n < 0) {
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