#include <iostream>
using namespace std;

int soma(int x){
    x += 10;
    return x;
}

int main(){
    int x;

    cin >> x;
    cout << soma(x) << endl;

    return 0;
}