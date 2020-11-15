
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


int calculateWinner(const array<array<int, 3>, 3> &field) // const Konstante wert nicht änderen kännen und & Referansz Wert nicht Copy! :)
{

    for (int i = 0; i <= 2; i++)
    {
        if (field[i][0] != 0 && field[i][0] == field[i][1] && field[i][0] == field[i][2])
        {
            return field[i][0];
        }

        else if (field[0][i] != 0 && field[0][i] == field[1][i] && field[0][i] == field[2][i])
        {
            return field[0][i];
        }
    }

    if (field[0][0] != 0 && field[0][0] == field[1][1] && field[0][0] == field[2][2])
    {
        return field[0][0];
    }

    if (field[0][2] != 0 && field[0][2] == field[1][1] && field[0][2] == field[2][0])
    {
        return field[0][2];
    }

    return 0;
}

int main()
{
    array<array<int, 3>, 3> field;

    field[0] = {1,2,1};
    field[1] = {2,0,0};
    field[2] = {2,0,2};

    int winner = calculateWinner(field);

    if (winner !=0) {
        cout << winner << " hat das Spiel gewonnen ! " << endl;
    }
    
    cout << field[0][0] << " | " << field[0][1] << " | " << field[0][2] << endl;
    cout << field[1][0] << " | " << field[1][1] << " | " << field[1][2] << endl;
    cout << field[2][0] << " | " << field[2][1] << " | " << field[2][2] << endl;

    return 0;
}

    
    
