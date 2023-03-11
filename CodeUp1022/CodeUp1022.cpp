// 1022 : [기초-입출력] 문장 1개 입력받아 그대로 출력하기(설명)
// stdin과 fgets를 이용하기

#include <stdio.h>

int main() {
	char data[2001];
	
	fgets(data, 2000, stdin); // fgets 메서드는 띄어쓰기가 있는 문자열도 받을 수 있는 메서드
	printf("%s", data);
	
	return 0;
}