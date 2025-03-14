#include <iostream>

using namespace std;

int getMileInkM(){
    int mile, km;
    cout << "Введите количество км - ";
    cin >> mile;
    const double kmInMile = 1.609344;
    km = mile * kmInMile;
    cout << km;
    return km;
}


int main(){
    getMileInkM();
    return 0;
}