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



int main(){


    vector<int> i = { 4, 2, 8, 6 }; // Vector

    int b[5] = { 30, 50, 90, 20 }; // Array

    vector<int>::iterator iIterator = i.begin(); // Iterator
    cout << *(iIterator+1) << endl;

    cout << *(b+1) << endl;

    return 0;
}