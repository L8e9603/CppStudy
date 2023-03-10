// [기초-입출력] 연월일 입력받아 그대로 출력하기

#include <stdio.h>

int main() {
	int y, m, d;

	scanf_s("%d.%d.%d", &y, &m, &d); // 버퍼오버플로우 공격 보안 문제 떄문에 scanf_s를 써야 컴파일러 오류 사라짐
	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}