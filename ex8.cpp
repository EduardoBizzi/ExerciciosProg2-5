#include <iostream>
using namespace std;

void maiuscula(string a){
    for(int i = 0; i < a.length();i++){
        if(a[i] >= 97 && a[i] <= 122){
            a[i] -= 32;
        }
    }

    cout << a << endl;
}

int main(){
    string a;

    cin >> a;
    maiuscula(a);

    return 0;
}