#include<stdio.h>
#include<math.h>
//定义常变量 0-9的十个拼音
const char p[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
int main() {
	char in[101];
	scanf("%s", in);
	int val=0;//保存各位相加的数 初始化为0
	for (int i = 0; in[i] != '\0'; i++) {//对字符串处理 当不等于\0(字符串结束标志)
		switch (in[i])//对当前位 判断
		{
		case '0':val += 0; break;//是0的话 就+0 依次类推
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
	int temp=val;//临时变量用来保存数字 除以10 以后的结果
	int i = 0;//用来保存位数
	while (temp) {//只要temp不等于0就就循环
		i++;
		temp=temp/10;//除以10 
	}
	temp = val;//再次利用temp
	int t;//t用来保存数位上的数
	for (int x = 0; x < i; x++) {//位数有几个 就循环几次
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