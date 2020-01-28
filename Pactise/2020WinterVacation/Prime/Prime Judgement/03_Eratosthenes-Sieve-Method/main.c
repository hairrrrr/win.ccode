//����3����ͨɸ������������˹����(Eratosthenes)ɸ��
//
//Ч�ʣ��ж�ǰһǧ���������0.3s
//      ǰ1�ڵ�����3s
//	  ǰ3�ڵ�����8~9s
//
//˼·:���ǵ��뷨�ǣ�����һ���ȷ�Χ��1�����飬����ֻ��ע�±�Ϊ 1 ~ N��Ҫ������ޣ� ������Ԫ���������±ꡣ
//   �������ʼ��Ϊ1��Ȼ����forѭ����������ΧΪ����2 ~ sqrt(N)�����������Ԫ��Ϊ1����˵���������Ԫ�ص��±�����Ӧ������������
//   ������ǽ�����±꣨��1���⣩������������Ӧ������Ԫ��ȫ����Ϊ0��Ҳ�����ж���Ϊ��������
//�ðٶȰٿƶ԰�����˹����ɸ����������Ҫ�õ���Ȼ��n���ڵ�ȫ������������Ѳ����� �����������ı����޳���ʣ�µľ���������

#include<stdio.h>
#include<math.h>

#define N (int)1e+1

void testErat();
void EratPrime(int* isPrime, int upper_board);//�жϷ�Χ�ڵ����Ƿ���������д��0����д��1��
int SearchBisection(int* isPrime, int n);//���ֲ���Ŀ����

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
	//��ʼ��isPrime
	for (i = 2; i <= upper_board; i++)
		isPrime[i] = 1;

	isPrime[1] = 0;
	isPrime[0] = 0;//1,0��������

	for (i = 2; i < sqrt(upper_board); i++) {
		if (isPrime[i]) {
			isPrime[i] = 1;
		}
		for (j = 2; i * j <= upper_board; j++) {//������n����n >= 2����������
			isPrime[i * j] = 0;
		}
	}

}
int SearchBisection(int* isPrime, int n) {

	int left = 0;
	int right = N;
	int mid = 0;
	//С�ڵ�������������û������
	if (n < 0) {
		printf("illegal input!\n");
		return -1;
	}
	//���ַ�������nҲ����isPrime�����±�
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
	//Ŀ�������ܴ�������N
	if (right < left)
		printf("not found!\n");
	return -1;

}