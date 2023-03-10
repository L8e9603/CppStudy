// [기초-입출력] 시간 입력받아 그대로 출력하기(설명)

//#include <iostream>
//using namespace std;
//
//int main() {
//    int h, m;
//    char c;
//
//    cin >> h >> c >> m;
//
//    cout << h << c << m << endl;
//    
//    return 0;
//
//}

//C++은 문자열로 받아서 파싱해야한다.
#include <iostream>
using namespace std;

int main() {
	string time;
	string h, m;

	cin >> time;

	unsigned int pos = 0;

	cout << time.find(":1") << endl;

	while (1) {
		pos = time.find(":");							// find() 메서드는 인자에 해당하는 문자열을 찾았다면 해당 문자열의 시작 위치 리턴
		h = time.substr(0, pos);					// 문자열 time의 0번째 문자부터 pos번째 문자까지 잘라서 문자열 변수 h에 넣기
		m = time.substr(pos + 1, time.length());	// 문자열 time의 pos+1번째 문자부터 time의 길이만큼 잘라서 문자열 변수 m에 넣기
		break;
	}

	cout << h << ":" << m;

	return 0;
}