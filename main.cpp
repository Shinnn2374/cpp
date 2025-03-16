#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Введите число - ";
    cin >> n;
    int len = n / 2 - 1;
    int numbers[len];
    for (int i = 0; i <= len; i++) {
        if (i % 2){
            numbers[i] = i;
        }
    }
    for (int i = 0; i <= len; i++) {
        cout << numbers[i] << endl;
    }
}