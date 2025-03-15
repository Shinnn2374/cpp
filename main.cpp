#include <iostream>

using namespace std;

int main(){
    int n;
    int ar[n];
    cout << "Введите число - ";
    cin >> n;
    for (int  i = 0;  i < n; ++ i) {
        if (i%2){
            ar[i] =i;
        }
    }
    return 0;
}