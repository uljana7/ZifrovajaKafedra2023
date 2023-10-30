#include <iostream>

using namespace std;

int sum(int a, int b) {
    int res=0,i,N;
    if (a > b) {
        for (i = b; i <= a; i++) {
            res += i;
        }
    }
    else if (b > a) {
        for (i = a; i <= b; i++) {
            res += i;
        }
        
    }
    else {
        res = a + b;
    }
    return res;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int b, a;
    cout << "Введите границы диапозона" << endl;
    cin >> a >> b;
    cout <<"Сумма чесел от " << a << " до " << b << " = " << sum(a, b) << " ";

    return 0;
}
