// [����-�����] �ֹι�ȣ �Է¹޾� ���� �ٲ� ����ϱ�

//#include <iostream>
//using namespace std;
//
//int main() {
//    string num;
//    string numResult;
//    int pos;
//
//    cin >> num;
//
//    pos = num.find("-");
//    numResult = num.substr(0, pos) + num.substr(pos+1, num.length());
//
//    cout << numResult;
//    
//    return 0;
//}

#include <stdio.h>

int main() {
	int num1, num2;

	scanf_s("%d-%d", &num1, &num2);
	printf("%d%d", num1, num2);

	return 0;
}