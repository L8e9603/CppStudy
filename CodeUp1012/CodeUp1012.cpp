// 1012 : [����-�����] �Ǽ� 1�� �Է¹޾� �״�� ����ϱ�(����)

#include <iostream>

int main() {
    using namespace std;

    float x;

    cin >> x;

    cout << fixed;      // �Ҽ��� �ڸ��� ����
    cout.precision(6);  // ǥ���� �Ҽ��� �ڸ���, �ݿø� ó����
    cout << x;

    return 0;
}