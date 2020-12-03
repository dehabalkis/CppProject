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

#include <set>

#include<algorithm>

using namespace std;



int main(){

    set<string> words = {"Hallo","Welt"};

    words.insert("Mars");// Ekleme fonksionu ve Alfabetik olarak siraliyor !

    cout << words.size()<<endl; // kac tane kelime mevcut set Datenstructur un icinde ?

    cout << words.count("Mars") << endl; // aradigin kelime icerisinde var mi ?

    for (const string &word : words ) {

        cout << word << endl;

    }

    return 0;
}