/*创建,插入,遍历链表*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct data{
  int id;
	char name[20];
	struct data *next;
};
static int onoff=0;
struct data *head;
struct data *last;




void *create(int id,char name[20]){
	head=(struct data *)malloc(sizeof(struct data));
	head->id=id;
	strcpy(head->name,name);
	head->next=0;
	last=head;
	onoff=1;
	
}

void insert(int id,char name[20]){
	struct data *head;
	head=(struct data *)malloc(sizeof(struct data));
	head->id=id;
	strcpy(head->name,name);
	head->next=0;
	last->next=head;
	last=head;
}
void print_all(){
	struct data *point;
	point=head;
	while(1){
		printf("id:%d\n",point->id);
		printf("name:%s\n",point->name);
		printf("\n");
		point=point->next;
		if (point==0){
			break;
		}
	}
}
void change(int id,char name[20]){
	int n=1;
	struct data *newnext;
	struct data *newhead;
	newnext=head->next;
	n=n+1;
	while (n<3){
		newnext=newnext->next;
		n++;
	}
	newhead=(struct data *)malloc(sizeof(struct data));
	newhead->id=id;
	strcpy(newhead->name,name);
	newhead->next=newnext->next;
	newnext->next=newhead;

} 

void main(){
	char name[20];
	int id;
	int n;
	for (n=0;n<=3;n++){
		printf("id:");
		scanf("%d",&id);
		printf("name:");
		scanf("%s",&name);
		if (onoff==0){
			create(id,name);
		}else{
			insert(id,name);
		}
		printf("\n");
	}
	change(123,"wwz");
	printf("---------------------------------------------------------------------\n");
	print_all();
}
