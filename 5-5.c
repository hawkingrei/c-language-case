/*动态链表创建，以及遍历*/
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
	printf("---------------------------------------------------------------------\n");
	print_all();
}
