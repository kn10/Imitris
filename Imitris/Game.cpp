/*
Nguyen, Kelvin
August 1, 2014
603892561
CS32 - Summer 2014
Project 3: Imitris
*/

#include "Game.h"
#include "Tank.h"
#include "UserInterface.h"
#include "Piece.h"
#include "randPieceType.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 25;

const int TANK_X = 0;
const int TANK_Y = 0;

const int PROMPT_Y = 20;
const int PROMPT_X = 0;

const int SCORE_X = 16;
const int SCORE_Y = 8;

const int ROWS_LEFT_X = 16;
const int ROWS_LEFT_Y = 9;

const int LEVEL_X = 16;
const int LEVEL_Y = 10;

const int NEXT_PIECE_TITLE_X = 16;
const int NEXT_PIECE_TITLE_Y = 3;

const int NEXT_PIECE_X = 16;
const int NEXT_PIECE_Y = 4;

Game::Game(int width, int height)
 : m_screen(SCREEN_WIDTH, SCREEN_HEIGHT), m_level(1)
{
	m_score = 0;
	m_rowsLeft = 5;
}

void Game::play()
{
	m_tank.display(m_screen, TANK_X, TANK_Y);
	displayStatus();  //  score, rows left, level
	displayPrompt("Press the Enter key to begin playing Imitris!");
	waitForEnter();  // [in UserInterface.h]

	for(;;)
	{
		//cout << "randPieceType(): " << randPieceType() << endl;
		/*IPiece i1(3);
		i1.printPiece(m_screen, 3, 0);*/

		if (!playOneLevel())
		{
			break;
		}
		displayPrompt("Good job!  Press the Enter key to start next level!");
		waitForEnter();
		m_level++;
	}
	displayPrompt("Game Over!  Press the Enter key to exit!");
	waitForEnter();
}

void Game::displayPrompt(std::string s)     
{
	m_screen.gotoXY(PROMPT_X, PROMPT_Y);
	m_screen.printStringClearLine(s);   // overwrites previous text
	m_screen.refresh();
}

void Game::displayStatus()
{
	// score
	m_screen.gotoXY(SCORE_X, SCORE_Y);
	m_screen.printString("Score:");
	cout << setw(12) << m_score;

	// rows left
	m_screen.gotoXY(ROWS_LEFT_X, ROWS_LEFT_Y);
	m_screen.printString("Rows left: ");
	cout << std::setw(7) << m_rowsLeft;

	// level
	m_screen.gotoXY(LEVEL_X, LEVEL_Y);
	m_screen.printString("Level:");
	cout << setw(12) << m_level;
}

bool Game::playOneLevel()
{

	IPiece i1(3);
	cout << m_tank.getBlock(3, 0) << endl;
	cout << m_tank.isBlockEmpty(3, 0) << endl;
	while (m_tank.isBlockEmpty(3,0))
	{
		int y = 0;
		i1.printPiece(m_screen, 3, y);
		Sleep(400);
		y++;
		//m_tank.deletePiece(m_screen, 3, 0);
		//Sleep(400);
		//i1.printPiece(m_screen, 3, 1);
	}

	




	

	return false;  // [Replace this with the code to play a level.]
}
