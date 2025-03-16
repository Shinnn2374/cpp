#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число - ";
    cin >> n;
    int len = (n + 1) / 2;
    int numbers[len];
    for (int i = 0; i < len; i++) {
        numbers[i] = 2 * i + 1;
    }
    for (int i = 0; i < len; i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}