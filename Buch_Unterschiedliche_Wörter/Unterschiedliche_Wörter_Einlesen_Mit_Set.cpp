//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 24.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>

#include <set>

#include<fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream file("C:\\Users\\Mehmet Deha Balkis\\Desktop\\faust.txt"); // ein Datei einlesen

    if (file.is_open()) {

        set<string> words;

        while (!file.eof()) {

            string word;

            file >> word; // Wörter zahlen!

            words.insert(word);

            //counter++;
        }

        //cout << " Das Buch hat = > " << counter << endl;

        cout << " Es wurden " << words.size() << " unterschiedliche Woerter eingelesen." << endl;

        file.close();
    }

    else {
        cout << "Die Datei konnte nicht geoffnet werden." << endl;
    }

    return 0;
}