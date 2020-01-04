#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("\n                        ==================================\n");
	printf("                        *          欢迎来到扫雷游戏  ！  *\n");
	printf("                        *  请输入选项：                  *\n");
	printf("                        *             1.  play           *\n");
	printf("                        *             0.  exit           *\n");
	printf("                        *                                *\n");
	printf("                        ==================================\n\n");
}
void game() {
	char mine[ROWS][COLS];//定义放置雷的数组
	char show[ROWS][COLS];//定义防止提示的数组
	srand((unsigned)time(NULL));
	InitBoard(mine,ROWS,COLS,INIT_MINE);//初始化雷
	InitBoard(show, ROWS, COLS,INIT_SHOW);//初始化提示
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
				printf("再见！\n");
				break;
			default:
				printf("选择错误！请重新选择\n");
				break;
		}
	} while (Input);
}
int main() {
	test();//游戏测试
	return 0;
}
