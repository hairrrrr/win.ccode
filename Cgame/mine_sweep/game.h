//ɨ����Ϸʵ�ַ�����
//1 ��ʼ��
//2 ������
//3 ɨ��
//ע�⣺
//1������Ҫ�����ɨ�������ϵ�Ԫ�أ�1����ʾ��Ϣ 2����   �������ڴ�ӡ����ʱ���ܽ��׵�λ�ô�ӡ������
//���ԣ���ô�Ǿ���Ҫ�������̷ֱ������������Ϣ
//2��ɨ��ʱ����Ҫ������ڱ��㿪��һ����Χ��������ʾ��0~8���������ʾ���������׵ĸ���������Ҫ�����ܵ����������жϡ�
//��˾ͳ�����һ�����⣺�����̱߽ǵ�Ԫ������жϣ�ֱ���жϿ��ܻ����������������Ǹ���������2��2��
//3���ַ������͵�ת������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

#define ROW 4
#define COL 4
#define ROWS ROW+2
#define COLS COL+2

#define INIT_MINE '0'//�����������ʾ������ȽϺ�д
#define INIT_SHOW '*'
#define MARK '#'//��ǵ���

#define MINENUM 15 //�����׵ĸ���

void InitBoard(char board[ROWS][COLS], int row, int col,char set);//��ʼ������
void DisplayBoard(char board[ROWS][COLS], int row,int col);//չʾ����
void SetMine(char board[ROWS][COLS], int row, int col);//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//��ʼɨ��
char HintMine(char board[ROWS][COLS], int x, int y);//������ʾ
int Stretch(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//չ��������Χ
void FailBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//ʧ������
