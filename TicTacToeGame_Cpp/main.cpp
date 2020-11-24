//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 22.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>
#include<fstream>
#include <algorithm>
#include <vector>
#include <array>

#include"TicTacToeField.h"
#include"TicTacToeGame.h"

using namespace std;

int main(){

    TicTacToeGame game("Deha", "Marc");

    cout << game.getFieldStr() << endl;

    while (!game.isFinisched()) {

        cout << " Hey " << game.getCurrentPlayer() << " --->  Bitte gebe deine gewuenschte Position ein: " << endl;


        int row, col;

        cin >> row >> col;

        game.play(row, col);

        cout << game.getFieldStr() << endl;

    }

    cout << "Der Gewinner ist:  " << game.getWinner() << endl;

    return 0;
}