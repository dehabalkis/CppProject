
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


int calculateWinner(const vector<vector<int>> &field) // const Konstante wert nicht änderen kännen und & Referansz Wert nicht Copy! :)
{ //array<array<int, 3>, 3>& field

    for (int i = 0; i <= 2; i++)
    {
        if (field.at(i).at(0) != 0 && field.at(i).at(0) == field.at(i).at(1) && field.at(i).at(0) == field.at(i).at(2))
        {
            return field.at(i).at(0);
        }

        else if (field.at(0).at(i) != 0 && field.at(0).at(i) == field.at(1).at(i) && field.at(0).at(i) == field.at(2).at(i))
        {
            return field.at(0).at(i);
        }
    }

    if (field.at(0).at(0) != 0 && field.at(0).at(0) == field.at(1).at(1) && field.at(0).at(0) == field.at(2).at(2))
    {
        return field.at(0).at(0);
    }

    if (field.at(0).at(2) != 0 && field.at(0).at(2) == field.at(1).at(1) && field.at(0).at(2) == field.at(2).at(0))
    {
        return field.at(0).at(2) ;
    }

    return 0;
}

int main()
{

    vector<vector<int>> field;

    field.push_back ( {2, 0, 1} );
    field.push_back ( {1, 1, 1} );
    field.push_back ( {2, 0, 2} );


    //array<array<int, 3>, 3> field;

    //field[0] = { 1,2,1 };
    //field[1] = { 2,0,0 };
    //field[2] = { 2,0,2 };

    int winner = calculateWinner(field);

    if (winner != 0) {
        cout << winner << " hat das Spiel gewonnen ! " << endl;
    }

    for (const auto &row : field) {

        cout << " | ";

        for (const auto &item : row) {

            cout << item << " | ";

        }
        cout << endl;
    }

    //cout << field.at(0).at(0) << " | " << field.at(0).at(1) << " | " << field.at(0).at(2) << endl;// für Vector
    //cout << field.at(1).at(0) << " | " << field.at(1).at(1) << " | " << field.at(1).at(2) << endl;
    //cout << field.at(2).at(0) << " | " << field.at(2).at(1) << " | " << field.at(2).at(2) << endl;


    //cout << field[0][0] << " | " << field[0][1] << " | " << field[0][2] << endl; // für Array
    //cout << field[1][0] << " | " << field[1][1] << " | " << field[1][2] << endl;
    //cout << field[2][0] << " | " << field[2][1] << " | " << field[2][2] << endl;

    return 0;
}



