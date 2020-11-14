#include <iostream>
#include <string>

#include<fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream file("C:\\Users\\Mehmet Deha Balkis\\Desktop\\faust.txt"); // ein Datei einlesen

    if (file.is_open()) {

        int counter = 0;

        while (!file.eof()) {

            string word;

            file >> word; // Wörter zahlen!

            //getline(file, word); // Zeile zahlen!

            counter++;
        }

        cout <<" Das Buch hat = > " << counter <<endl;

        file.close();
    }

    else {
        cout << "Die Datei konnte nicht geoffnet werden." << endl;
    }

    return 0;
}