
#include <iostream>
#include <string>

#include<fstream>

#include <algorithm>

#include <vector>
#include <array>

using namespace std;

class Car {

private:

    string brand;
    int ps;

public:

    Car(string brandParameter, int psParameter) {

        brand = brandParameter;
        ps = psParameter;

        cout << " Ein neues Auto wird erstellt " << endl;
    }

    void tune() {

        ps += 20;

    }

    void printCar() {
        cout << brand << " : " << ps << endl;
    }
};


int main(){

    Car c1("BMW", 330);
    Car c2("Mercedes", 220);
    Car c3("Audi", 390);

    c3.tune();


    //c1.brand = "Mer";

    c1.printCar();
    c2.printCar();
    c3.printCar();

    return 0;
}