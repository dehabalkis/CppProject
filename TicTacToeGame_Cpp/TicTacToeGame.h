//
//  TicTacToeGame.h
//
//  Created by Mehmet Deha Balkis on 22.11.2020
//  
///////////////////////////////////////////////

#pragma once
 
#include <stdio.h>
#include <string>
#include <vector>

#include <iostream>
#include <sstream>

#include "TicTacToeField.h"


class TicTacToeGame : public TicTacToeField 
{
private:

	std::string player1;
	std::string player2;
	int currentPlayer;

public:

	TicTacToeGame(std::string player1, std::string player2);
	void play(int row, int col);
	bool isFinisched();


	std::string getWinner();
	std::string getCurrentPlayer();
	std::string getFieldStr();
};