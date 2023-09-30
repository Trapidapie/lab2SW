#include <iostream>
#include <cmath>

using namespace std;

// Допоміжні функції, щоб не використовувати if, else, etc..
int ErrorValueInCondition() {
    cout << "Error Value" << endl;
    return 0;
}

int TrueConditionInThirdFunc(int m, int n, int k) {
    k ^= (1u << m); //change m bit value
    k ^= (1u << n); //change n bit value
    cout << k << endl;
    return 0;
}

int TrueConditionInFourthFunc(int n) {
    int x = 8 << int(n * 3 - 3); // переміщуємо біти ліворуч. Ця операція відкидає крайній лівий біт і присвоює 0 крайньому правому біту.
    cout << x << endl;
    return 0;
}

int TrueConditionInFifthFunc(int k) {
    double x = 1 / k + 1 / pow(k, 2) + 1 / pow(k, 3);
    cout << x << endl;
    return 0;
}
//Кожний номер завдання відповідає 1.номер-функції
int first() {
    cout << "first func" << endl;
    int x;
    cout << "enter x: ";
    cin >> x;
    x >= 33 && x <= 255 ? cout << (char)x << endl : cout << "X must be more or equal then 33 and low or equal then 255" << endl;
    return 0;
}

int second() {
    cout << "second func" << endl;
    double x;
    cout << "enter x: ";
    cin >> x;
    double y = ((0 <= x && x <= 2 )||( 7 < x && x < 11) ? 0 : 1);
    cout << y << endl;
    return 0;
}

int third() {
    cout << "third func" << endl;
    int k;
    cout << "enter k: ";
    cin >> k;
    int m;
    cout << "enter m: ";
    cin >> m;
    int n;
    cout << "enter n: ";
    cin >> n;
    (k > 0 && 0 <= n && n < 32 && 0 <= m && m < 32) ? TrueConditionInThirdFunc(m, n, k) : ErrorValueInCondition();
    return 0;
}

int fourth() {
    int n = 0;
    int x;
    cout << "fourth func" << endl;
    cout << "enter n (0 - 10): ";
    cin >> n;
    !(0 <= n && n <= 10) ? ErrorValueInCondition() : TrueConditionInFourthFunc(n);
    return 0;
}

int fifth() {
    cout << "fifth func" << endl;
    cout << "enter k: ";
    int k;
    cin >> k;
    double y;
    k > 0 ? TrueConditionInFifthFunc(k) : ErrorValueInCondition();
    return 0;
}

double idz() {
    cout << "IDZ func 26var" << endl;
    cout << "enter x: ";
    double x;
    cin >> x;
    double firstExpression = x - pow(x, 2);
    double secondExpression = pow((x + 1), 2);
    double thirdExpression = x / (x - 1);
    double y = x < 0 ? firstExpression : (x <= 2 ? secondExpression : thirdExpression);
    cout << y << endl;
    return 0;
}

int main() {
//   first();
//   second();
//   third();
//   fourth();
//   fifth();
//   idz();
   return 0;
}