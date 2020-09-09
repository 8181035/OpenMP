#include <iostream>
#include "Lab1Lin.h"

using namespace std;


//���� ������� �� MxN �����������(���������) ���������(�������� ��������).
//�������� ���������, ��������� ����� ������ � �������� ������ ����� ���� 
//�������� ������������ ��������� ��� ������ ������.
int dexToBinOnesSum(int dexNum)
{
	int binSum = 0;
	while (dexNum >= 1)
	{
		binSum += dexNum % 2;
		dexNum /= 2;
	}
	return binSum;
}

void runLab1Var0(int** matrix, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		int onesSum = 0;
		for (int j = 0; j < M - 1; j++)
		{
			for (int k = j + 1; k < M; k++)
			{
				onesSum += dexToBinOnesSum(matrix[i][j] * matrix[i][k]);
			}
		}
		printf("row %d : %d \n", i, onesSum);
	}
}


//���� ������� �� MxN ����������� (���������) ��������� (�������� ��������).
//�������� ���������, ��������� ���������� ������ 
//� ������������ ������ ����� ���� �������� ���� ��������� ��� ������ ������.
int countSevensInNum(int num)
{
	int count = 0;
	while (num > 0)
	{
		if(num % 10 == 7)
			count++;
		num /= 10;
	}
	return count;
}

void runLab1Var1(int** matrix, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		int sevensSum = 0;
		for (int j = 0; j < M - 1; j++)
		{
			for (int k = j + 1; k < M; k++)
			{
				sevensSum += countSevensInNum(matrix[i][j] + matrix[i][k]);
			}
		}
		printf("row %d : %d \n", i, sevensSum);
	}
}