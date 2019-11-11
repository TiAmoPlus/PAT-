#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN sizeof(Student)
struct Student
{
	char name[11];
	char ID[11];
	int score;
	struct Student *next;
};
int main() {
	int n;
	scanf("%d",&n);
	Student *head, *p;
	p = head = (Student*)malloc(LEN);//开辟链表头
	for (int t = 0; t < n; t++) {
		scanf("%s%s%d", p->name, p->ID, &p->score);
		p->next = (Student*)malloc(LEN);
		p = p->next;
		p->next = NULL;
	}
	p = head;//从头开始
	/*while (p->next!=NULL){
		printf("%d\n", p->score);
		p = p->next;
	}*/
	
	int score_max, score_min;
	char name_max[11], name_min[11];
	char ID_max[11], ID_min[11];
	strcpy(ID_max, p->ID);
	strcpy(ID_min, p->ID);
	strcpy(name_max, p->name);
	strcpy(name_min, p->name);
	score_max = score_min = p->score;
	while (p->next!=NULL)
	{
		if (p->score > score_max) {
			score_max = p->score;
			strcpy(name_max, p->name);
			strcpy(ID_max, p->ID);
		}
		else if (p->score < score_min) {
			score_min = p->score;
			strcpy(name_min, p->name);
			strcpy(ID_min, p->ID);
		}
		p = p->next;
	}
	printf("%s %s\n%s %s\n", name_max, ID_max,name_min,ID_min);
	return 0;
}