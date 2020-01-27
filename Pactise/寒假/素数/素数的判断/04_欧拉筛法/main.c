//����4��ŷ��ɸ��������ɸ����
//˼·: ��ŷ��ɸ�����������Χ�ġ��ж��������顱��Ȼ���ö��ַ�Ѱ��Ŀ����

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define N  (int)1e+5//��������ж�����һ���� 1 �� 100000 �����Ƿ�Ϊ����
					//�� e ��ʾ��ָ��Ϊdouble����

void testPrime();
void PrimeList(int* Prime, bool* isPrime, int n);//��ӡ��Χ������
int SearchPrime(bool* isPrime, int n);//���ַ�Ѱ��Ŀ����

int main() {

	testPrime();
	return 0;

}

void testPrime() {

	int n = 0;

	int* Prime = (int*)malloc(sizeof(int) * (N + 1));//�����������
	bool* isPrime = (int*)malloc(sizeof(int) * (N + 1));//��������Ƿ�Ϊ��������

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

	if (isPrime != NULL) {//ȷ��isPrime���ǿ�ָ��
		//��isPrime�����ʼ��Ϊ 1
		for (i = 2; i <= N; i++) {
			isPrime[i] = true;
		}
		isPrime[1] = false;//��������
	}



	if (isPrime != NULL && Prime != NULL) {
		//��2��������Χ����N
		for (i = 2; i <= N; i++) {
			if (isPrime[i])//����±꣨�±��Ӧ��1 ~ ��Χ����N����Ӧ��isPrimeֵû�б���Ϊfalse��˵������������������±������������
				Prime[count++] = i;
			//ѭ�����Ʊ��ʽ�����壺jС�ڵ�����������ĸ��� �� ���������е�ÿһ�������� i �Ļ�С�ڷ�Χ����N
			for (j = 0; (j < count) && (Prime[j] * (long long)i) <= N; j++)//��iǿ��ת������Ϊvs����warning��Ҫ��ת��Ϊ�����ͷ�ֹ��������������ϲ�����Ӱ��
			{
				isPrime[i * Prime[j]] = false;//ÿһ�������� i ����i >= 2����������������Ϊfalse

				//�����ŷ��ɸ���ĺ��ģ������Լ��ٷ�������false���ظ���
				//�����ǽ�ÿһ������������������� 2����С��������������� �ĳ˻�
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
	//С�ڵ�������������û������
	if (n <= 0) {
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