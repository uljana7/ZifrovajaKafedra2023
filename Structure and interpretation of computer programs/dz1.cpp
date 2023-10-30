#include <iostream>

using namespace std;

int expt(int b, int n) {
    int i = 1, result = b;
    while (i < n) { 
        i++;
        if (i%2 == 0) {
            result = pow(b, i/2)* pow(b, i / 2);
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
    int b, n;
    cout << "Введите число и степень" << endl;
    cin >> b >> n;
    cout << b<<"^"<<n<<"="<<expt(b, n) << " ";

    return 0;
}
