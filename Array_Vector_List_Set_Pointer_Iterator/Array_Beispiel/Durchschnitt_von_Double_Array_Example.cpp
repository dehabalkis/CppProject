
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


int main()
{
    int n = 0;

    array<double, 4> a = {2.0, 3.0, 4.0, 5.0};

    double sum = 0.0;

    for (double element : a) {

        sum = sum + element;

    }

    cout << sum / a.size() << endl;

    cout << sum << endl;

    return 0;
}
