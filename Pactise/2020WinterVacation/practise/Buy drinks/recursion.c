#include<stdio.h>

int bottleNum(int yuan) {

	//�����ǮӦ�ô��� 0
	if (yuan > 0) {

		while (yuan != 1) {
			//yuan ������
			if (yuan & 1)
				return yuan - 1 + bottleNum((yuan >> 1) + 1);
			//yuan ��ż��
			else
				return yuan + bottleNum(yuan >> 1);
		}
		//ֻʣһ����ƿ�������ٻ����ϣ�����
		return 1;
	}
	else
		return 0;

}


int main(void) {

	int yuan = 0;

	printf("Enter the amount of money:�� ");
	scanf("%d", &yuan);

	printf("You can buy %d bottles of drinks.\n", bottleNum(yuan));

	return 0;
}
