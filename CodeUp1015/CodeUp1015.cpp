// 1015 : [����-�����] �Ǽ� �Է¹޾� ��° �ڸ����� ����ϱ�(����)

#include <iostream>

int main() {
    using namespace std;

    float x;

    cin >> x;

    cout << fixed;      // �Ҽ��� �ڸ��� ����
    cout.precision(2);  // ǥ���� �Ҽ��� �ڸ���, �ݿø� ó����
    cout << x;

    return 0;
}