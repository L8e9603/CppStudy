// [����-�����] �ð� �Է¹޾� �״�� ����ϱ�(����)

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

//C++�� ���ڿ��� �޾Ƽ� �Ľ��ؾ��Ѵ�.
#include <iostream>
using namespace std;

int main() {
	string time;
	string h, m;

	cin >> time;

	unsigned int pos = 0;

	cout << time.find(":1") << endl;

	while (1) {
		pos = time.find(":");							// find() �޼���� ���ڿ� �ش��ϴ� ���ڿ��� ã�Ҵٸ� �ش� ���ڿ��� ���� ��ġ ����
		h = time.substr(0, pos);					// ���ڿ� time�� 0��° ���ں��� pos��° ���ڱ��� �߶� ���ڿ� ���� h�� �ֱ�
		m = time.substr(pos + 1, time.length());	// ���ڿ� time�� pos+1��° ���ں��� time�� ���̸�ŭ �߶� ���ڿ� ���� m�� �ֱ�
		break;
	}

	cout << h << ":" << m;

	return 0;
}