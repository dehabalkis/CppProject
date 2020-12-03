
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


void doSomethings(const vector<int> &a) {


    for (const auto &element : a) {

        cout << " - " << element << endl;

    }

}

void doSomethings2(const vector<int>& a) {


    for (int element = 0; element < a.size(); element++) {

        cout << " - " << a[element] << endl;

    }

}


int main()
{

    vector<int> a = { 1, 2, 3, 5 };

    //doSomethings(a);

    doSomethings2(a);

    return 0;
}