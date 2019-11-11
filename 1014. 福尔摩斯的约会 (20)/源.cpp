#include<stdio.h>
#include<string.h>
int main() {
	char F_1[61], F_2[61], L_1[61], L_2[61];
	gets_s(F_1);//gets是VC++6.0库函数 后因安全性问题 在VS中改成了gets_s 在PAT考试中 使用gcc 4.7.2编译器
	gets_s(F_2);
	gets_s(L_1);
	gets_s(L_2);
	char Day[4];
	int Hour, Minute;
	int i;
	i = 0;
	while (F_1[i]!='\n')
	{
		if (F_1[i] >= 'A'&&F_1[i] <= 'G') {
			if (F_1[i] == F_2[i]) {
				switch (F_1[i])
				{
				case 'A':strcpy(Day, "MON"); break;
				case 'B':strcpy(Day, "TUE"); break;
				case 'C':strcpy(Day, "WED"); break;
				case 'D':strcpy(Day, "THU"); break;
				case 'E':strcpy(Day, "FRI"); break;
				case 'F':strcpy(Day, "SAT"); break;
				case 'G':strcpy(Day, "SUN"); break;
				default:
					break;
				}
				break;
			}
		}		
		i++;
	}
	i++;
	while (F_1[i]!= '\n') 
	{
		if (F_1[i] >= '0'&&F_1[i] <= 'N') {
			if (F_1[i] == F_2[i]) {
				switch (F_1[i])
				{
				case '0':Hour = 0; break;
				case '1':Hour = 1; break;
				case '2':Hour = 2; break;
				case '3':Hour = 3; break;
				case '4':Hour = 4; break;
				case '5':Hour = 5; break;
				case '6':Hour = 6; break;
				case '7':Hour = 7; break;
				case '8':Hour = 8; break;
				case '9':Hour = 9; break;
				case 'A':Hour = 10; break;
				case 'B':Hour = 11; break;
				case 'C':Hour = 12; break;
				case 'D':Hour = 13; break;
				case 'E':Hour = 14; break;
				case 'F':Hour = 15; break;
				case 'G':Hour = 16; break;
				case 'H':Hour = 17; break;
				case 'I':Hour = 18; break;
				case 'J':Hour = 19; break;
				case 'K':Hour = 20; break;
				case 'L':Hour = 21; break;
				case 'M':Hour = 22; break;
				case 'N':Hour = 23; break;
				default:
					break;
				}
				break;
			}
		}
		i++;

	}
	i = 0;
	while (L_2[i] != '\n')
	{
		if ((L_2[i]>='A'&&L_2[i]<='Z')||(L_2[i]>='a'&&L_2[i]<='z')) {
			if (L_1[i] == L_2[i]) {
				Minute = i;
				break;
			}
		}
		i++;
	}
	printf("%s ", Day);
	if (Hour < 10) {
		printf("0%d:", Hour);
	}
	else
	{
		printf("%d:", Hour);
	}
	if (Minute < 10) {
		printf("0%d", Minute);
	}
	else
	{
		printf("%d", Minute);
	}
	
	return 0;
}