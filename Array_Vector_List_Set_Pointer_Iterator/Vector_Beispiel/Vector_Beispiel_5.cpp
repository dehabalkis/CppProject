
#include <iostream>
#include <string>

#include<fstream>

#include <algorithm>

#include <vector>
#include <array>

using namespace std;

int main(){

    //int zahl = 0;

    vector<double> entries;

    while (!cin.eof()){

        double eingabe = 0.0;
        cin >> eingabe;

        entries.push_back(eingabe);

        double sum = 0.0;

        for (const auto &e : entries) {

            sum = sum + e;

        }

        cout << " Die bisherige Summe ist : "<<sum << endl;
    }

    //get.push_back();

    //data.pop_back();

    /* while  (const auto &element : get) {
        cout << element << endl;
    }  */

    //cout << data.front() << endl;

    //cout << data.back() << endl;

    return 0;
}



