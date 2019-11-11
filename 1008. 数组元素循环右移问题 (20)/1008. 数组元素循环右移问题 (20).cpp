#include<stdio.h>
void RightOne(int *s, int n) {//s表示整数数组 n代表数组大小 这个函数 实现右移动一位
	int t = s[n-1];//保存数组最后一位数字
	for (int i = n-1; i >0; i--) {
		s[i] = s[i-1];

	}
	s[0] = t;
}
void RightM(int *s, int n, int m) {//s表示数组 n代表数组大小 m表示移动的位数 这个函数实现右移m位
	while (m--) {
		RightOne(s, n);
	}
}

int main()
{
	int a[100];
	int N, M, t;//M表示右移的位数 N表示数组的个数 t用来临时交换数据
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	RightM(a, N, M);
	int flag=1;//表示是否输入的第一个数
	for (int i = 0; i <N; i++)
	{
		if (flag == 1) {
			printf("%d", a[i]);
			flag = 0;
		}
		else {
			printf(" %d", a[i]);
		}
	}
    return 0;
}

