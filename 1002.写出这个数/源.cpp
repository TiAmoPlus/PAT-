#include<stdio.h>
#include<math.h>
//���峣���� 0-9��ʮ��ƴ��
const char p[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
int main() {
	char in[101];
	scanf("%s", in);
	int val=0;//�����λ��ӵ��� ��ʼ��Ϊ0
	for (int i = 0; in[i] != '\0'; i++) {//���ַ������� ��������\0(�ַ���������־)
		switch (in[i])//�Ե�ǰλ �ж�
		{
		case '0':val += 0; break;//��0�Ļ� ��+0 ��������
		case '1':val += 1; break;
		case '2':val += 2; break;
		case '3':val += 3; break;
		case '4':val += 4; break;
		case '5':val += 5; break;
		case '6':val += 6; break;
		case '7':val += 7; break;
		case '8':val += 8; break;
		case '9':val += 9; break;
		default:
			break;
		}
	}
	int temp=val;//��ʱ���������������� ����10 �Ժ�Ľ��
	int i = 0;//��������λ��
	while (temp) {//ֻҪtemp������0�;�ѭ��
		i++;
		temp=temp/10;//����10 
	}
	temp = val;//�ٴ�����temp
	int t;//t����������λ�ϵ���
	for (int x = 0; x < i; x++) {//λ���м��� ��ѭ������
		t = temp / (int)pow(10, i - x - 1);
		temp = temp % (int)pow(10,i-x-1);
		if (x==i-1) {
			printf("%s",p[t]);
		}
		else {
			printf("%s ",p[t]);
		}
	} 
	//printf("\n");
	return 0;
}