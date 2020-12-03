//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 24.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <array>

#include<algorithm>

using namespace std;


int main(){

    vector<string> names = { "AAA", "XXX", "BBB", "CCC"  };

    sort(names.begin(), names.end());

    for (const string &name : names) {

        cout << " - " << name << endl;

    }


    //vector<string> names = { "Deha", "Marc" };

    /*
    
    vector<string>::iterator i = names.begin();

    vector<string>::iterator j = names.end();

    j=j-1; // letzte Beschreibung
    
    */

    /*
    for (vector<string>::iterator i = names.begin(); i < names.end(); i++) {

        cout << *i << endl;

    }
    */

    return 0;
}