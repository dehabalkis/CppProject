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

void doSomething() {

    int stackArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int* a = new int[10]();

    delete [] a;

}

int main(){

    doSomething();

    return 0;
}