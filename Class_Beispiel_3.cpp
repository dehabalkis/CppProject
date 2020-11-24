
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

    Car(string brand, int ps) {

        this->brand = brand;
        this->ps = ps;

        cout << " Ein neues Auto wird erstellt " << endl;
    }

    string getBrand() {

        return brand;
    }

    int getPs() {

        return ps;
    }

    void setPs(int ps) {

        if (ps > 1000) {

            cout << " Das kann nicht sein! "<< ps << " spinnst du? " << endl;
        }
        else {

            this->ps = ps;
        }
    }

    void printCar() {
        cout << this->brand << " : " << ps << endl;
    }
};


int main(){

    Car c1("BMW", 330);
    Car c2("Mercedes", 220);
    Car c3("Audi", 390);

    //c3.tune();


    //c1.brand = "Mer";

    c1.printCar();
    c2.printCar();
    c3.printCar();

    c1.setPs(1001);

    cout<< c1.getPs() << endl;

    return 0;
}