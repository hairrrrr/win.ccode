//����1-1����΢������
//˼�룺���������Ķ���˼���������Ǵ���1����Ȼ��������1�������⣬�������������������ӡ�
//      
//	  �����ǾͿ�����һ��ѭ������2��ʼ�������������ȥ1���������������ܱ���������ô���������������
//	  Ҳ����˵��
//	  ����һ���� n , i �� 2 ��ʼȡֵ��ֱ�� n - 1(ȡ����),��� n  %  i != 0 , n ��������
//	  
//	  ��һ��˼�����б�Ҫ������ n - 1 ��
//	  ����1���⣬�κκ�����С�����Ӿ���2�����������Ӿ��� n/2
//	  �����Ǿͱ����� n/2���㹻��

//#include<stdio.h>
//
//void testPrime();
//int isPrime(int target);
//
//int main() {
//
//	testPrime();
//	return 0;
//}
//
//void testPrime() {
//
//	int target = 0;
//	int yes_or_no = 0;
//
//	printf("input a number \n");
//	scanf("%d", &target);
//
//	yes_or_no = isPrime(target);
//
//	if (yes_or_no == 1)
//		printf("YES\n");
//	else if (yes_or_no == 0)
//		printf("NOT\n");
//
//}
//
//int isPrime(int target) {
//
//	int i = 0;
//
//	if (target <= 1) {
//		printf("illegal input!\n");//��������
//		return -1;
//	}
//
//	for (i = 2; i < target / 2; i++) {
//		if (target % i == 0)
//			return 0;
//	}
//
//	return 1;
//}

//����1-2���ٽ�һ��
//˼�룺������Ļ����ϣ���ʵ����Ҫ������ n/2��ֻ��Ҫ�� ����n����������n�� �Ϳ����ˡ�Ϊʲô�أ����Ǹ���ѧ���⣬�������˼��һ�¡�

#include<stdio.h>
#include<math.h>

void testPrime();
int isPrime(int target);

int main() {

	testPrime();
	return 0;
}

void testPrime() {

	int target = 0;
	int yes_or_no = 0;

	printf("input a number \n");
	scanf("%d", &target);

	yes_or_no = isPrime(target);

	if (yes_or_no == 1)
		printf("YES\n");
	else if (yes_or_no == 0)
		printf("NOT\n");

}

int isPrime(int target) {

	int i = 0;

	if (target <= 1) {
		printf("illegal input!\n");//��������
		return -1;
	}

	for (i = 2; i <= sqrt(target); i++) {
		if (target % i == 0)
			return 0;
	}

	return 1;
}