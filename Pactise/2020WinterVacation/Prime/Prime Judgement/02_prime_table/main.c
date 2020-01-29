//����2�������������ж�����
//˼·�����һ����������������С���κ���������ô�������������
//
//���֡���ӡ��������ķ���Ч�ʺܵͣ����Ƽ�ʹ�ã�����ѧϰ˼��

#include<stdio.h>

#define N (int)1e+1

void testPrime();
int isPrime(int target, int count, int* PrimeArray);//����ӡ��������
int SearchBisection(int* isPrimeArray, int up_bound, int target);//���ַ�����Ŀ����

int main() {

	testPrime();
	return 0;
}

void testPrime() {

	int* isPrimeArray = (int*)malloc(sizeof(int) * (N + 1));
	int* PrimeArray = (int*)malloc(sizeof(int) * N);
	//������������������Ϊ���������ڶ��п����˿ռ䡣
	//��һ������ isPrimeArray ������ �洢��Χ���������Ƿ�Ϊ��������Ϣ�����Ƿ�1���Ƿ�0�����±��Ӧÿһ�����������Կ��ٵĿռ�Ӧ����������С + 1
	//�ڶ������� PrimeArray ����������������Ĵ�С��ʵԶС�ڷ�ΧN
	int i = 0;
	int target = 0;
	int count = 0;//��ŵ�ǰ���������ֵ���������
	int yes_or_no = 0;

	printf("input a number within %d\n", N);
	scanf("%d", &target);

	for (i = 2; i <= N; i++) {
		isPrimeArray[i] = 0;//�ж�ǰ���������ж�Ϊ������
		if (isPrime(i, count, PrimeArray)) {
			PrimeArray[count++] = i;
			isPrimeArray[i] = 1;//�ж�i Ϊ����
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

	//С�ڵ���1��������û������
	if (target <= 1) {
		printf("illegal input!\n");
		return -1;
	}

	//targetҲ����isPrimeArray������±�
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
	//Ŀ�������ܴ�������N
	if (right < left)
		printf("not found!\n");
	return -1;

}