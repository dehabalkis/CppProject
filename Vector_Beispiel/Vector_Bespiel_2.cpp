
#include <iostream> // Read funktion

#include <string>// String Funktion

#include<fstream> // Read Funktion

#include <algorithm> //Matematische Funktion

#include <vector> // Vector und Array ähnlich Funktion

#include <array> // Array low lavel Software lösungen Funktion

using namespace std; // std::cout << i << endl; bunu yazmamak icin bu formulu kullandik!


int main()
{
    // vector<string> name;

    //name.push_back ("Monika"); // 0 ---- Hinzufügen 
    //name.push_back("Mark"); // 1 ---- Hinzufügen 

    vector<string> name = { "Max", "Monika","Max", "Monika"};

    for (int i = 0; i < name.size(); i++) {

        //cout << name.at(i) << endl;

    }

    for (const auto &names : name) // kein Kopie & referanz nutzen besser!
    
    {

        cout << names << endl;

    }
    
    //cout << name.at(1) << endl; // 1 ---- Hinzufügen

    //cout << name.size() << endl; // Size von Vector

    return 0;
}

    
    