#include <iostream>
using namespace std;

int main() {
    string num1;
    string num2;
    string num3;
    int pos;

    cin >> num1;
    pos = num1.find(".");
    num2 = num1.substr(0, pos);
    num3 = num1.substr(pos+1, num1.length());
    cout << num2 << endl << num3 << endl;
    
    return 0;
}