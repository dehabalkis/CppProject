int main(){

    vector<int> a = { 1, 2, 3, 4, 5};

    //a.erase(a.begin() + 1, a.end() - 2);

    a.insert(a.begin()+2, 555);

    for (const int &x : a) {

        cout << x << endl;

    }

    // | 1 | 2 | 3 | 4 | 5 |  |  | // Ein Vector Beispiel !

    return 0;
}