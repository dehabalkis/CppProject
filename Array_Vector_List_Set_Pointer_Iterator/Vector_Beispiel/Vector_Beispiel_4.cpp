
#include <iostream>
#include <string>

#include<fstream>

#include <algorithm>

#include <vector>
#include <array>

using namespace std;

int main(){

    vector<string> data = {"Max", "Monik", "Erik", "Eva"};

    data.push_back("Deha");

    data.pop_back();

    for (const auto &element : data) {

        cout << element << endl;

    }

    cout << " " << endl;

    cout << data.front() << endl;

    cout << data.back() << endl;

    return 0;
}
