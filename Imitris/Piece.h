/*
Nguyen, Kelvin
August 1, 2014
603892561
CS32 - Summer 2014
Project 3: Imitris
*/

#include <iostream>
#include "Tank.h"
#include "UserInterface.h"


class IPiece
{
public:
	IPiece();
	IPiece(int orientation);
	void printPiece(Screen& screen, int x, int y) const;
	

private:
	char m_boundingBox[4][4];
};