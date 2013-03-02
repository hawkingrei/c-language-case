/*队列的实现（添加，删除）*/
#include <stdio.h>
#include <malloc.h>
int m=0;
struct data{
  int n;
	struct data *next;
};
struct data *head;
struct data *last;
void create(){
	head=(struct data *)malloc(sizeof(struct data));
	head->n=m;
	m++;
	head->next=0;
	last=head;
}
void add(){
	struct data *change;
	change=head;
	head=(struct data *)malloc(sizeof(struct data));
	head->n=m;
	m++;
	head->next=change;
}

void del(){
	struct data *point;
	struct data *find;
	point=head;
	while(point->next!=0){
		find=point;
		point=point->next;
	}
	free(point);
	find->next=0;
}
void all(){
	struct data *point;
	point=head;
	printf("%d\n",point->n);
	do{
		point=point->next;
		printf("%d\n",point->n);
	}while(point->next!=0);
}
void main(){
	int n;
	create();
	for (n=1;n<=10;n++){
		add();
		all();
		printf("===============================\n");
		if (n%2==0){
			del();
			all();
			printf("=========del==========\n");
		}
	}
	all();
}
