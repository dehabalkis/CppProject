
#include <iostream>
#include <string>

#include<fstream>

#include <algorithm>

#include <vector>
#include <array>

using namespace std;


class Car {

public:
    string brand;
    int ps;
};

void printCar(const Car &eingabe) {

    cout << eingabe.brand << " : " << eingabe.ps << endl;

}


int main(){

    Car c;
    c.brand = "BMW";
    c.ps = 330;


    Car c2;
    c2.brand = "Mercedes";
    c2.ps = 320;

    printCar(c);
    printCar(c2);


    return 0;
}