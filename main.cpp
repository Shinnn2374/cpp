#include <iostream>

using namespace std;

int main(){
    const double kmInMile = 1.609344;
    double distMile, distKm;
    cout << "Укажите расстояние в милях - ";
    cin >> distMile;
    distKm = distMile * kmInMile;
    cout << "Расстояние в км - " << distKm << endl;
    return 0;
}