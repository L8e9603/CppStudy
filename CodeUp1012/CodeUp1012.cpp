#include <iostream>

int main() {
    using namespace std;
    float x;
    cin >> x;
    cout << fixed; // 소수점 자리수 고정
    cout.precision(6);
    cout << x;
    return 0;
}