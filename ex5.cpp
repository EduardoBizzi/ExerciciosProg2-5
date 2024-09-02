#include <iostream>
using namespace std;

int soma(int x){
    x -= 5;
    return x;
}

int main(){
    int x;

    cin >> x;
    cout << soma(x) << endl;

    return 0;
}