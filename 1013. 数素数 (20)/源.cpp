#include<stdio.h>
#include<math.h>
bool sushu(int n) {//判断一个数是否是素数
	for (int t = 2; t <= sqrt(n); t++) {
		if (n%t == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	bool temp;
	int M, N,num = 0, n = 1,huanghang=0;
	scanf("%d%d", &M, &N);
	while (true)
	{
		n++;
		temp = sushu(n);
		if (temp == true) {
			num++;
			if (num >= M&&num <= N) {
				huanghang++;
				if (huanghang%10==1) {
					printf("%d", n);
				}
				else {
					if (huanghang % 10 == 0) {
						printf(" %d\n", n);
					}
					else
					{
						printf(" %d", n);
					}
					
				}
			}
			else if (num > N) {
				break;
			}
		}
		
	}
	return 0;
}