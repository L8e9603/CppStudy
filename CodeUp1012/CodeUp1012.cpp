// 1012 : [기초-입출력] 실수 1개 입력받아 그대로 출력하기(설명)

#include <iostream>

int main() {
    using namespace std;

    float x;

    cin >> x;

    cout << fixed;      // 소수점 자리수 고정
    cout.precision(6);  // 표현할 소수점 자리수, 반올림 처리됨
    cout << x;

    return 0;
}