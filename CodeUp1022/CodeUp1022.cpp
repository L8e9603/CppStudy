// 1022 : [기초-입출력] 문장 1개 입력받아 그대로 출력하기(설명)
// stdin과 fgets를 이용하기

#include <stdio.h>

int main() {
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
}
