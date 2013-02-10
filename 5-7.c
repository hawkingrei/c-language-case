/*动态链表创建，删除，以及遍历*/
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
struct data *find(int n){
	int nn;
	struct data *willreturn;
	for (nn=0;nn<n;nn++){
		if(nn==0){
			willreturn=head;
			
		}
		else{
			willreturn=willreturn->next;
		}
	}
	return(willreturn);
}

void delet(int n){
	struct data *last;
	struct data *del;
	struct data *nextn;
	if (n==1){
	del=find(n);
	nextn=find(n+1);
	head=nextn;
	}
	if (n==4){
	last=find(n-1);
	del=find(n);
	last->next=0;
	}
	if (n>1&&n<4){
	last=find(n-1);
	del=find(n);
	nextn=find(n+1);
	last->next=nextn;
	}
	free(del);
	
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
	delet(4);
	printf("---------------------------------------------------------------------\n");
	print_all();
}
