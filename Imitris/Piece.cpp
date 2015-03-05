/*
Nguyen, Kelvin
August 1, 2014
603892561
CS32 - Summer 2014
Project 3: Imitris
*/
#include "Piece.h"

IPiece::IPiece()
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			m_boundingBox[i][j] = NULL;
		}
	}

	// Orientation #0
	for (size_t x = 0; x < 4; x++)
	{
		m_boundingBox[1][x] = '#';
	}
	
}


IPiece::IPiece(int orientation)
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			m_boundingBox[i][j] = NULL;
		}
	}

	// Orientation #0
	if (orientation == 0 || orientation == 2)
	{
		for (size_t x = 0; x < 4; x++)
		{
			m_boundingBox[1][x] = '#';
		}
	}

	if (orientation == 1 || orientation)
	{
		for (size_t y = 0; y < 4; y++)
		{
			m_boundingBox[y][1] = '#';
		}
	}

	

	else
	{
		for (size_t x = 0; x < 4; x++)
		{
			m_boundingBox[1][x] = '#';
		}
	}
}

void IPiece::printPiece(Screen& screen,int x, int y) const
{

	char tempBlock;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			screen.gotoXY(x + i, y + j);
			tempBlock = m_boundingBox[j][i];
			screen.printChar(tempBlock);
			
		}
	}
	
}



