#include <iostream>

int main() {
    using namespace std;
    float x;
    cin >> x;
    cout << fixed; // �Ҽ��� �ڸ��� ����
    cout.precision(6);
    cout << x;
    return 0;
}