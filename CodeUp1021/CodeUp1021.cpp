// [기초-입출력] 단어 1개 입력받아 그대로 출력하기(설명)

//#include <iostream>
//using namespace std;
//
//int main() {
//	string word;
//
//	cin >> word;
//	cout << word << endl;
//
//	return 0;
//}

// CodeUp 사이트에서는 동작하는 코드
#include <stdio.h>

int main() {
	char data[51]="";

	scanf("%s", &data);
	printf("%s", data);

	return 0;
}