
#include <iostream>
#include <string>



#include<fstream>
#include <algorithm>
#include <vector>
#include <array>

#include"TicTacToeField.h"

using namespace std;

int main(){

    vector<vector<int>> field;

    field.push_back({ 0, 0, 0 });
    field.push_back({ 0, 0, 0 });
    field.push_back({ 0, 0, 0 });


    //TicTacToeField f;

    TicTacToeField f(field);

    cout << f.calculateWinner() << endl;

    //f.printField();

    string OutStr = f.getFielStr();

    cout << OutStr.length() << endl;

    cout << OutStr << endl;

    return 0;
}