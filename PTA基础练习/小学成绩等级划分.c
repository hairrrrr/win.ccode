#define _CRT_SECURE_NO_WARNINGS 1
/*����Ҫ���д�������N��ѧ���İٷ��Ƴɼ���ͳ������Ƴɼ��ķֲ����ٷ��Ƴɼ�������Ƴɼ���ת������

���ڵ���90��ΪA��
С��90�Ҵ��ڵ���80ΪB��
С��80�Ҵ��ڵ���70ΪC��
С��70�Ҵ��ڵ���60ΪD��
С��60ΪE��

�����ʽ :
�����ڵ�һ���и���һ��������N����1000������ѧ���������ڶ����и���N��ѧ���İٷ��Ƴɼ�������Կո�ָ���

�����ʽ :
��һ�������A��B��C��D��E��Ӧ������Ƴɼ��������ֲ������ּ��Կո�ָ�����ĩ�����ж���ո�*/
#include<stdio.h>
#include<string.h>
int main() {
	int Anum = 0;
	int Bnum = 0;
	int Cnum = 0;
	int Dnum = 0;
	int Enum = 0;
	int num = 0;
	int i = 0;
	int sco[100] = { 0 };
	printf("Input the Num of student\n");
	scanf("%d", &num);
	
	printf("Input scores of all students(like A B C ...)\n");
	for (i = 0; i < num; i++) {
		scanf("%d", &sco[i]);
		switch (sco[i] / 10) {
			case 10:
			case 9:
				Anum++;
				break;
			case 8:
				Bnum++;
				break;
			case 7:
				Cnum++;
				break;
			case 6:
				Dnum++;
				break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				Enum++;
				break;
			default:
				break;
		}
	}
	printf("%d  %d  %d  %d  %d\n", Anum, Bnum, Cnum, Dnum, Enum);
}
