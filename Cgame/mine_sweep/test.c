#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("\n                        ==================================\n");
	printf("                        *          ��ӭ����ɨ����Ϸ  ��  *\n");
	printf("                        *  ������ѡ�                  *\n");
	printf("                        *             1.  play           *\n");
	printf("                        *             0.  exit           *\n");
	printf("                        *                                *\n");
	printf("                        ==================================\n\n");
}
void game() {
	char mine[ROWS][COLS];//��������׵�����
	char show[ROWS][COLS];//�����ֹ��ʾ������
	srand((unsigned)time(NULL));
	InitBoard(mine,ROWS,COLS,INIT_MINE);//��ʼ����
	InitBoard(show, ROWS, COLS,INIT_SHOW);//��ʼ����ʾ
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);	

}
void test() {
	int Input = 0;
	do {
		menu();
		scanf("%d", &Input);
		switch (Input) {
			case 1:
				game();
				break;
			case 0:
				printf("�ټ���\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (Input);
}
int main() {
	test();//��Ϸ����
	return 0;
}
