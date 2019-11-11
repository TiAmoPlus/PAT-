#include<stdio.h>
int main() {
	int s[100];
	int z[100];
	char ch=NULL;
	int num = 0;//多项式个数
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
	
			if (flag==1) {//如果是第一个
				flag = 0;
				if (z[t]==0) {//判断是不是零多项式
					printf("0 0");
				}
				else {
					temp_s = s[t] * z[t];
					temp_z = z[t] - 1;
					printf("%d %d", temp_s, temp_z);
				}
			}
			else {//如果不是第一个 就在前面加空格
				if (z[t] == 0) {//判断是不是零多项式
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