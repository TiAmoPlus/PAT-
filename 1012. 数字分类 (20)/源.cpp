#include<stdio.h>
int main() {
	int n;
	int A[5] = { 0 };
	int A_num[5] = { 0 };
	int A_2_flag = 1;
	double A_4_result;
	scanf("%d", &n);
	for (int t = 1; t <= n; t++) {
		int x;
		scanf("%d", &x);
		if (x % 5 == 0 && x % 2 == 0) {
			A[0] += x;
			A_num[0]++;
		}
		else if (x % 5 == 1) {
			A_num[1]++;
			if (A_2_flag==1) {
				A_2_flag = 0;
				A[1] = A[1] + x;
			}
			else {
				A_2_flag = 1;
				A[1] = A[1] - x;
			}
		}
		else if (x%5==2) {
			A[2] += x;
			A_num[2] ++;
		}
		else if (x % 5 == 3) {
			A_num[3]++;
			A[3] += x;
		}
		else if(x%5==4)
		{
			A_num[4]++;
			if (x > A[4]) {
				A[4] = x;
			 }
		}		
	}
	if (A_num[0] != 0) {
		printf("%d ", A[0]);
	}
	else {
		printf("N ");
	}
	if (A_num[1] != 0) {
		printf("%d ", A[1]);
	}
	else
	{
		printf("N ");
	}
	if (A_num[2] != 0) {
		printf("%d ", A_num[2]);
	}
	else {
		printf("N ");
	}
	if (A_num[3] != 0) {
		A_4_result = (double)A[3] / (double)A_num[3];
		printf("%.1f ", A_4_result);
	}
	else
	{
		printf("N ");
	}
	if (A_num[4] != 0) {
		printf("%d", A[4]);
	}
	else {
		printf("N");
	}
	return 0;
}