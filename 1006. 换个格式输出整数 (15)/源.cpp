#include<stdio.h>
int main() {
	int n;//�����������
	int B, S,G;//����� ʮ ��
	scanf("%d", &n);
	B = n / 100;
	S = n % 100 / 10;
	G = n % 10;
	while (B)
	{
		printf("B");
		B--;
	}
	while (S)
	{
		printf("S");
		S--;
	}
	int t = 1;
	while (t <= G) {
		printf("%d", t);
		t++;
	}
	return 0;
}