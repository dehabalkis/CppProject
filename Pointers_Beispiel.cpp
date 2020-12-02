//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 24.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main(){

    int a = 123;

    int *b = &a;

    //cout << &a << endl; // (  &a  )  a`nin sadece adress gösterir

    //cout << a << endl; // inhalt zeigen

    //cout << *b << endl; // adresste ki degeri direk gösterir Kopyalamadan

    cout << *&a << endl; // (  &a  ) a`nin icinde ki adresi verir eger (  *&a  ) böyle olursa adresteki iceregi verir!!!!!

    return 0;
}

ÖRNEKKKKK-------------------------------------------------------------------------------------------------------------------------


int main(){

    array<int, 3 > a = { 1, 7, 3 };

    int b[3] = { 1, 8, 3 };

    //cout << *a << endl; // ne yazik ki bu array yazilisinda bu özelligi kulanamiyoruz

    cout << *(b+2) << endl;

    return 0;
}



----------------------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Array auf Heap erstellen 
/// </summary>
/// <returns></returns>

int main(){

    //int* a = new int[10]();

    void* a;

    float b = 0.44;

    cout << b << endl;

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------

//
//  main.cpp
//
//  Created by Mehmet Deha Balkis on 24.11.2020
//  
///////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

void doSomething() {

    int stackArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int* a = new int[10]();

    delete [] a;

}

int main(){

    vector<int> a = { 1, 2, 3, 4, 5, 6 }; // Heap gespeichert Automatisch!

    return 0;
}