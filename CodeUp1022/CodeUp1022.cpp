// 1022 : [����-�����] ���� 1�� �Է¹޾� �״�� ����ϱ�(����)
// stdin�� fgets�� �̿��ϱ�

#include <stdio.h>

int main() {
	char data[2001];
	
	fgets(data, 2000, stdin); // fgets �޼���� ���Ⱑ �ִ� ���ڿ��� ���� �� �ִ� �޼���
	printf("%s", data);
	
	return 0;
}