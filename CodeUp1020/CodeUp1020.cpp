// [기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기

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