#include<stdio.h>
int main() {
	int n;//保存输入的数
	int B, S,G;//代表百 十 个
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