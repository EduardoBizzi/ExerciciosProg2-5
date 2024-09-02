#include <iostream>
using namespace std;

int mult(int a, int b){
    int x;
    x = a*b;
    return x;
}

int main(){
    int a, b;

    cin >> a >> b;
    cout << mult(a , b) << endl;

    return 0;
}