/*
Nguyen, Kelvin
August 1, 2014
603892561
CS32 - Summer 2014
Project 3: Imitris
*/


#include "Tank.h"
#include "UserInterface.h"
using namespace std;



void Tank::display(Screen& screen, int x, int y)
{
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			m_board[i][j] = '@';
		}
	}

	for (int i = 0; i < 18; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			m_board[i][j] = NULL;
		}
	}



	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << m_board[i][j];
		}
		cout << endl;
	}
}



bool Tank::isBlockEmpty(int y, int x)
{
	if (m_board[y][x] == NULL)
	{
		return true;
	}

	return false;
}

void Tank::deletePiece(Screen& screen, int x, int y)
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			screen.gotoXY(x + i, y + j);
			screen.printChar(' ');
		}
	}

}

void Tank::setBoard(int y, int x)
{
	m_board[y][x] = '$';
}

void Tank::displayBoard()
{
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << m_board[i][j];
		}
		cout << endl;
	}
}

char Tank::getBlock(int x, int y) const
{
	return m_board[x][y];
}