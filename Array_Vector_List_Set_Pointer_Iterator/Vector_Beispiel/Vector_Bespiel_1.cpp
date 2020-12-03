
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


int main()
{
    vector<string> names;


    while (!cin.eof()) // so lange geht die Schleife, bis max eintippen!
    {
        string name;
        cin >> name;

        names.push_back(name);

        cout << " Bisher wurden " << names.size() << " Teilnehmer erfasst! " << endl;

    }
    return 0;
}
