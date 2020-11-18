#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
#include <stdlib.h>
#include <time.h>
#define MAX_ROW 3
#define MAX_COL 3
int menu() {
	printf("************************\n");
	printf(" 1. ��ʼ��Ϸ\n");
	printf(" 0. ������Ϸ\n");
	printf("*************************\n");
	printf(" ����������ѡ��: ");
	//�������Ƕ�һ����ʼ����ĳ�ʼ��������ͬ��¼��Ϸ�Ľ��档
	int choice = 0;//����һ������choice�������������ߵ���Ը��
	scanf("%d", &choice);
	return choice;
}
void init(char chessBoard[MAX_ROW][MAX_COL]) //�������Ƕ���һ���������е��ַ����飬��������ʼ��Ϊ�� ����Ϊ�˱��ں����޸����̵Ĺ�ģ���������ǲ��ú궨����ʵ���������С�
{
	// �������е�ÿ��Ԫ�ض���Ϊ �ո�
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			chessBoard[row][col] = ' ';
		}
	}
}
//���������������,�ǲ����ģ���Ϊ�ո�����Ǻ���������˵������ʲôҲ�������ģ������������Ǳ����ڿո����Χ���ϱ߽��ߡ�
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL])
{ 
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			printf("%c ", chessBoard[row][col]);
		}
		printf("\n");
	}//����Ǽ򵥵İ����ǵĿո����̴�����ˣ����ʱ������ʲôҲ�������ģ��������ǶԿո����̽����Ż���
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) 
	{
		printf("| %c | %c | %c |\n", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}//�����̵ı߽��ӡ����
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) 
{
	while (1)
	{
		int row = 0;
		int col = 0;
		printf(" �������������(row col): ");
		
		scanf("%d %d", &row, &col);
	
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) 
		{
			//������������֮ǰ��Ҫ����������ֵ�����жϣ����ж�����ֵ�Ƿ�Ϸ���Ӧ���Ǻ��������궼��һ����Χ�ڡ�
			printf("�������겻�ںϷ���Χ�� [0, 2]\n");
			continue;
		}
		// ͬʱ��Ҫ��������µĵط��Ƿ��Ѿ����ӣ�����ӿ���������µģ�Ҳ�����ǵ����µġ� 
		if (chessBoard[row][col] != ' ') 
		{
			printf("��������λ���Ѿ�������!\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) 
{
	while (1) 
	{
		int row = rand() % MAX_ROW;//����һ�����������������ȡ��������Ϊ�����꣬������Ҳͬ��
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') 
		{
			// ��Ҫ��֤������������Ѿ����ӵ�λ��. 
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) 
{
	//���������Ϊ���б�Ÿ������ǲ��Ƕ������ˣ�����˵�ж���Ϸ������һ�ַ�����
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			if (chessBoard[row][col] == ' ')
			{
				// ����ҵ� �ո� ˵��û��
				return 0;
			}
		}
	}
	return 1;
}
char IsVictory(char chessBoard[MAX_ROW][MAX_COL]) 
{
	// �ж����е���
	for (int row = 0; row < MAX_ROW; row++)
	{
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) 
		{
			return chessBoard[row][0];
		}
	}
	// �ж����е���
	for (int col = 0; col < MAX_COL; col++)
	{
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) 
		{
			return chessBoard[0][col];
		}
	}
	// �ж������Խ���
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) 
	{
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2]) 
	{
		return chessBoard[2][0];
	}
	// �ж��Ƿ����
	// ���������Ƿ���ʣ��ռ�
	if (IsFull(chessBoard)) 
	{
		return 'q';
	}
	return ' ';
}
// �˴�Լ�����ؽ���ĺ���: 
// 'x' ��ʾ��һ�ʤ
// 'o' ��ʾ���Ի�ʤ
// ' ' ��ʾʤ��δ��
// 'q' ��ʾ����
void game() 
{
	// 1. �������̲���ʼ��
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = ' ';
	while (1) 
	{
		// 2. ��ӡ����
		printChessBoard(chessBoard);
		// 3. �������(���������������ķ�ʽ������)
		playerMove(chessBoard);
		// 4. �ж�ʤ����ϵ
		winner = IsVictory(chessBoard);
		if (winner != ' ') 
		{
			break;
		}
		// 5. ��������(���λ������) 
		computerMove(chessBoard);
		// 6. �ж�ʤ����ϵ
		winner = IsVictory(chessBoard);
		if (winner != ' ') 
		{
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x') 
	{
		printf("��ϲ��, ��Ӯ��!\n");
	}
	else if (winner == 'o') 
	{
		printf("��Ǹ��������!\n");
	}
	else 
	{
		printf("����\n");
	}
}
int main() 
{
	// �˴�ͨ���򵥵Ľ����˵�����ҽ������п�ʼһ����Ϸ
	// �˴�ʹ��ǿ������ת��, �� time_t ת�� unsigned int
	srand((unsigned int)time(0));//�����Ǹ������һ��������ӣ���������������й��ɵļ������������������ʱ����ʵ�֣���Ҫ����ͷ�ļ���time.h��
	while (1) 
	{
		int choice = menu();
		if (choice == 1) 
		{
			game();
		}
		else if (choice == 0) 
		{
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}