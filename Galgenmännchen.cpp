
#include <iostream>
#include <string>

using namespace std;

string word = "GARGAMEL";

string unknow = "";

char select;

int failed = 0;


int main()
{
    

    for (int i = 0; i < word.length(); i++)
    {
        unknow.append("_");
    }

    cout << " Folgendes Wort wird gesucht= " + unknow << endl;

    while (unknow.find("_") != string::npos && failed < 10)
    {
        
        cin >> select;

        //cout << unknow.find(select) << endl; // BAK BAKALIM KAC DÖNÜYOR
        if (word.find(select) == string::npos)
        {
            failed++;
        }
        else
        {
            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] == select)
                {
					
                    unknow[i] = select;
                
				}
            }
        }

        cout << " Folgendes Wort wird gesucht= "
             << unknow << " du hast noch " 
             << (10 - failed) << " Fehlversuche "
             << endl;
    }

    if (unknow.find("_") == string::npos) {
        cout << "Du hast gewonnen! The End"<< endl;
    }
    
    else {
        cout << "Du hast verloren! The End" << endl;
    }
    

}

    
    
