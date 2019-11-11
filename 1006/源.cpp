#include<stdio.h>
int m = 1, n = 2;
void sub1(int m, int n) {
	m+= 2; n++;
}
void sub2() {
	m += 2; n++;
}
int main() {

	printf("%d,%d", m, n);
	sub1(4, 5);
	m++; n++;
	printf("%d,%d", m, n);
	sub2();
	printf("%d,%d", m, n);

	return 0;
}