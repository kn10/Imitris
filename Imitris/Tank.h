/*
Nguyen, Kelvin
August 1, 2014
603892561
CS32 - Summer 2014
Project 3: Imitris
*/


#ifndef TANK_INCLUDED
#define TANK_INCLUDED



#include <iostream>

class Screen;

class Tank
{
public:
	void display(Screen& screen, int x, int y);
	bool isBlockEmpty(int y, int x);
	void deletePiece(Screen& screen, int x, int y);
	void setBoard(int y, int x);
	void displayBoard();
	char getBlock(int x, int y) const;


private:
	char m_board[19][12];
};

#endif // TANK_INCLUDED
