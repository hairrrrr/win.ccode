#define _CRT_SECURE_NO_WARNINGS 1
/*Ϊ���ᳫ�����Լ�õ磬ĳʡ������˾ִ�С����ݵ�ۡ�����װһ��һ��ľ����û���۷�Ϊ���������ݡ���
���õ���50ǧ��ʱ����50ǧ��ʱ�����ڵģ����Ϊ0.53Ԫ/ǧ��ʱ��
����50ǧ��ʱ�ģ��������ֵ��õ���������ϵ�0.05Ԫ/ǧ��ʱ�����д��������ѡ�
�����ʽ:
������һ���и���ĳ�û������õ�������λ��ǧ��ʱ����
�����ʽ:
��һ����������û�Ӧ֧���ĵ�ѣ�Ԫ�������������λС����
��ʽ�磺��cost = Ӧ�����ֵ�������õ���С��0�������"Invalid Value!"��*/
#include<stdio.h>
int main() {
	double kilowatt = 0;
	double fare = 0;
	printf("Input monthly electricity consumption\n");
	scanf("%lf", &kilowatt);
	if (kilowatt < 0)
		printf("Invalid Value!\n");
	else if (kilowatt <= 50) {
		fare = kilowatt * 0.53;
		printf("cost = %.2f\n", fare);
	}
	else if (kilowatt) {
		fare = kilowatt * 0.53 + (kilowatt-50)*0.05;
		printf("cost = %.2f\n", fare);
	}
	return 0;
}
