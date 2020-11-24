#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "TicTacToeField.h"

using namespace std;

//using namespace TicTacToeField;


TicTacToeField::TicTacToeField() {

    field.push_back({ 2, 0, 1 });
    field.push_back({ 1, 1, 1 });
    field.push_back({ 2, 0, 2 });

    cout << "Ich werde aufgerufen, wenn die Klasse erstellt wird" << endl;
}

TicTacToeField::TicTacToeField(vector<vector<int>> field) {

    this->field = field;

    cout << "Ich bin der Constructor, dem die Variable field uebergeben wird" << endl;
}

int TicTacToeField::calculateWinner(){

        for (int i = 0; i <= 2; i++){

            if (field.at(i).at(0) != 0 &&
                field.at(i).at(0) == field.at(i).at(1) &&
                field.at(i).at(0) == field.at(i).at(2))
            {
                return field.at(i).at(0);
            }

            else if (field.at(0).at(i) != 0 &&
                field.at(0).at(i) == field.at(1).at(i) &&
                field.at(0).at(i) == field.at(2).at(i))
            {
                return field.at(0).at(i);
            }
        }

        if (field.at(0).at(0) != 0 &&
            field.at(0).at(0) == field.at(1).at(1) &&
            field.at(0).at(0) == field.at(2).at(2))
        {
            return field.at(0).at(0);
        }

        if (field.at(0).at(2) != 0 &&
            field.at(0).at(2) == field.at(1).at(1) &&
            field.at(0).at(2) == field.at(2).at(0))
        {
            return field.at(0).at(2);
        }

    return 0;
}

string TicTacToeField::getFielStr() {

    stringstream result;

    for (const auto &row : field) {

        result << " | ";

        for (const auto &item : row) {

            result << item << " | ";

        }
            result << endl;
    }

    return result.str();
}