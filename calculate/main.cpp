#include <iostream>

using namespace std;

int sum(int firstNum, int secondNum){
    cout << "Сумма равна - " << firstNum + secondNum;
    return firstNum + secondNum;
}

int subtraction(int firstNum, int secondNum){
    cout << "Вычитание равно - " << firstNum - secondNum;
    return firstNum - secondNum;
}

int multiplication(int firstNum, int secondNum){
    cout << "Умножение равно - " << firstNum * secondNum;
    return firstNum * secondNum;
}

int division(int firstNum, int secondNum){
    cout << "Деление равна - " << firstNum / secondNum;
    return firstNum / secondNum;
}

int main() {
    int operation, firstNum, secondNum;
    cout << "Введите первое число - ";
    cin >> firstNum;
    cout << "Введите второе число - ";
    cin >> secondNum;
    cout << "1.Сложение" << endl;
    cout << "2.Вычитание" << endl;
    cout << "3.Умножение" << endl;
    cout << "4.Деление" << endl;
    cout << "Выберите операцию(Введите число) - ";
    cin >> operation;

    switch (operation) {
        case 1:
            sum(firstNum, secondNum);
            break;
        case 2:
            div(firstNum, secondNum);
            break;
        case 3:
            multiplication(firstNum,secondNum);
            break;
        case 4:
            div(firstNum,secondNum);
            break;
    }
}
