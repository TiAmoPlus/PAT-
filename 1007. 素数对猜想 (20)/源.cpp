#include<stdio.h>
#include<math.h>
bool sushu(int n) {//判断一个数是否是素数
	for (int t = 2; t <=sqrt(n); t++) {
		if (n%t == 0) {
			return false;
		}
	}
	return true;
}
int nextNum(int n) {//用来寻找下一个素数
	while (n+=2) {
		bool flag;
		flag = sushu(n);
		if (flag) {
			return n;
		}
	}


}

int main() {
	int n;//保存输入的数
	int k = 0;//用来计次
	int t;//t用来作为交换两个数的临时变量
	int Num_1, Num_2;
	scanf("%d", &n);
	Num_1 = 2;//初始化 一开始的数
	Num_2 = nextNum(1);
	while (Num_2 <= n) {
		if (Num_2 - Num_1 == 2) {
			k++;
		}
		t = Num_2;
		Num_2 = nextNum(Num_2);
		Num_1 = t;
	}
	printf("%d\n", k);
	return 0;
}