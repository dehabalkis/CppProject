
#include <iostream>
#include <string>



#include<fstream>
#include <algorithm>
#include <vector>
#include <array>

#include"TicTacToeField.cpp"

using namespace std;

int main(){

    TicTacToeField f;

    cout << f.calculateWinner() << endl;

    //f.printField();

    string OutStr = f.getFielStr();

    cout << OutStr.length() << endl;

    cout << OutStr << endl;

    return 0;
}