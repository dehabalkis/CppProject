
#include <iostream>
#include <string>

#include <algorithm>

using namespace std;

string neuWord = "";

bool palindrome(string word) {

    for (int i =0 ; i < word.length(); i++ ) {
           
        if (word.at(i) != word.at((word.length() - 1 - i)))
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    cout << palindrome("ABBA") << endl;
    cout << palindrome("REITTIER") << endl;
    cout << palindrome("MEHMETDEHA") << endl;

}