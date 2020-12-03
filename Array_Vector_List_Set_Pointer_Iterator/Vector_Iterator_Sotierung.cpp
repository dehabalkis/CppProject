//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 24.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include <vector>

#include <algorithm>

using namespace std;

int main()
{

    // In der List es wird nicht gehen !!!


    vector <string> data = {"Max", "Monika", "Erik", "Eva"};

    auto dataIterator = data.begin();

    cout << *(dataIterator+5) << endl;



    sort(data.begin(), data.end());

    for ( const string &element : data) {

        cout << element << endl;

    }

    return 0;
}