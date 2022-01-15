#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
// С клавиатуры вводиться число и расскладывается на отдельные элементы
int main()
{
    setlocale(LC_ALL, "Russian");
    int num, arr[3], temp;
    cout << "введите число" << '\n';
    cin >> num;
    for (int i = 0; i < 3; i++) {
        temp = num % 10;
        cout << "temp= " << temp << '\t';
        arr[i] = num % 10;
        cout << "arr= " << arr[i] << '\t';
        num /= 10;
        cout << "num= " << num << '\n';
    }
    cout << '\n';
    for (int i = 2; i > -1; i--) {
        cout << arr[i];
    }
    return 0;
}