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
#include <list>


#include<algorithm>

using namespace std;


void hinzufügen(list<int> &liste, list<int>& listee) {

    liste.splice(liste.begin(), listee);

    for (const int &e : liste ) {

        cout << e << endl;

    }

}



int main(){

    list <int> l = { 1, 2, 3, 4, 5 };

    list <int> k = { 9, 11, 12, 14, 16 };

    hinzufügen(l, k);

    for (auto it = l.begin(); it != l.end(); ++it) {

        if (*it == 4) {

            l.insert(it,15);

        }

    }

    for (int &x : l) {

        //cout << x << endl;

    }

    return 0;
}