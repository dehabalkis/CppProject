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

using namespace std;

void withPointer(int *p, int size) {

    for (int i = 0; i < size; i++) {

        cout << *p + i << endl;

    }

}

void withReference(const vector<int> &r) {

    for (int element : r) {

        cout << element << endl;

    }

}


int main(){
//-------------------------------------------------------------------------

    vector<int> r = {1, 2, 3, 4};

    withReference(r);

//-------------------------------------------------------------------------
    
    const int arrayLenght = 4;

    int p[arrayLenght] = {12, 13, 14, 15}; // Array klassische beschreibung!

    withPointer(p , arrayLenght);

//-------------------------------------------------------------------------
    return 0;
}