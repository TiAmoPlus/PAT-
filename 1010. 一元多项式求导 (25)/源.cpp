#include<stdio.h>
int main() {
	int s[100];
	int z[100];
	char ch=NULL;
	int num = 0;//����ʽ����
	int flag = 1;
	while (ch!='\n')
	{
		scanf("%d", &s[num]);
		scanf("%d", &z[num]);
		num++;
		scanf("%c", &ch);
	}
	int temp_s,temp_z;
	for (int t = 0; t < num; t++) {
	
			if (flag==1) {//����ǵ�һ��
				flag = 0;
				if (z[t]==0) {//�ж��ǲ��������ʽ
					printf("0 0");
				}
				else {
					temp_s = s[t] * z[t];
					temp_z = z[t] - 1;
					printf("%d %d", temp_s, temp_z);
				}
			}
			else {//������ǵ�һ�� ����ǰ��ӿո�
				if (z[t] == 0) {//�ж��ǲ��������ʽ
					continue;
				}
				else {
					temp_s = s[t] * z[t];
					temp_z = z[t] - 1;
					printf(" %d %d", temp_s, temp_z);
				}
			}
	}
	return 0;
}