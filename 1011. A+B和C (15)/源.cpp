#include<stdio.h>
#include<stdlib.h>
struct num
{
	long long a;//超长整形
	long long b;
	long long c;
};
int main(){
	int n;
	scanf("%d", &n);
	num *x=(num*)malloc(n * sizeof(num));
	for (int i = 0; i < n; i++) {
		scanf("%lld", &x[i].a);//scanf "%lld" 读取超长整形
		scanf("%lld", &x[i].b);
		scanf("%lld", &x[i].c);
	}
	for (int i = 0; i < n; i++) {
		if ((x[i].a + x[i].b) > x[i].c) {
			printf("Case #%d: true\n", i + 1);
		}
		else
		{
			printf("Case #%d: false\n", i + 1);
		}
	}
	return 0;
}