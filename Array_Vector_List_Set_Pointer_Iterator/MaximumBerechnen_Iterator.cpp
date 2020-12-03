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

int maximum(vector<int> &vec) {

    int m = -1;

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {

        if (*it > m) {

            m = *it;
        }
        //cout << *it << endl;
    }


    return m;
}


int main(){

    vector<int> a = { 1, 2, 3, 4, 5};

    vector<int> b = { 112, 35, 133, 1004, 500 };

    cout << maximum(b) << endl;


    //a.erase(a.begin() + 1, a.end() - 2);

    //a.insert(a.begin()+2, 555);
    
    /*
    for (const int &x : a) {

        cout << x << endl;

    }

    // | 1 | 2 | 3 | 4 | 5 |  |  | // Ein Vector Beispiel !
    */

    return 0;
}