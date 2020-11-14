#include <iostream>
#include <string>

#include<fstream>
#include <algorithm>

#include <vector>

using namespace std;

class Dikdortgen
{
private:

    int kenar1;
    int kenar2;

public:

    Dikdortgen() // Constructor
    {
        kenar1 = 1;
        kenar2 = 1;
    }

    Dikdortgen(int k1, int k2) // Constructor
    {
        kenar1 = k1;
        kenar2 = k2;
    }

    void setKenarlar(int k1, int k2) // set ve get
    {
        kenar1 = k1;
        kenar2 = k2;
    }

    int alanHesapla() 
    {
        return kenar1* kenar2;
    }

};

int main()
{
    Dikdortgen d1, d2(2,5);

    cout << "Alan degeri :" << d1.alanHesapla() << endl;

    d1.setKenarlar(30,15);
    //d2.setKenarlar(5, 10);

    cout << "Alan degeri :" << d1.alanHesapla() << endl;

    cout << "Alan degeri :" << d2.alanHesapla() << endl;

    return 0;
}

    
    
