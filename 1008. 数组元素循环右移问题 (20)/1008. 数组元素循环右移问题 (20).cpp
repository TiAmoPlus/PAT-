#include<stdio.h>
void RightOne(int *s, int n) {//s��ʾ�������� n���������С ������� ʵ�����ƶ�һλ
	int t = s[n-1];//�����������һλ����
	for (int i = n-1; i >0; i--) {
		s[i] = s[i-1];

	}
	s[0] = t;
}
void RightM(int *s, int n, int m) {//s��ʾ���� n���������С m��ʾ�ƶ���λ�� �������ʵ������mλ
	while (m--) {
		RightOne(s, n);
	}
}

int main()
{
	int a[100];
	int N, M, t;//M��ʾ���Ƶ�λ�� N��ʾ����ĸ��� t������ʱ��������
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	RightM(a, N, M);
	int flag=1;//��ʾ�Ƿ�����ĵ�һ����
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

