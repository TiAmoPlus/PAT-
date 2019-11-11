#include<stdio.h>
#include<math.h>
bool sushu(int n) {//�ж�һ�����Ƿ�������
	for (int t = 2; t <=sqrt(n); t++) {
		if (n%t == 0) {
			return false;
		}
	}
	return true;
}
int nextNum(int n) {//����Ѱ����һ������
	while (n+=2) {
		bool flag;
		flag = sushu(n);
		if (flag) {
			return n;
		}
	}


}

int main() {
	int n;//�����������
	int k = 0;//�����ƴ�
	int t;//t������Ϊ��������������ʱ����
	int Num_1, Num_2;
	scanf("%d", &n);
	Num_1 = 2;//��ʼ�� һ��ʼ����
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