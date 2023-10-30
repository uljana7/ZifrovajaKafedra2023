

//при возведении 1 в 9 степень результатом работы программы будет являться число 1, а при возведении 2 в 4 - 16




#include <iostream>

using namespace std;

int func(int b, int n) {
    int i = 1, result = b;
    while (i < n) {
        i++;
        if (i % 2 == 0) {
            result = pow(b, i / 2) * pow(b, i / 2);
        }
        else {
            result = b * pow(b, i - 1);
        }
    }
    return result;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int b, a;
    cout << "Введите число и степень" << endl;
    cin >> a >> b;
    cout << a << "^" << b << " = " << func(a, b) << " ";

    return 0;
}
