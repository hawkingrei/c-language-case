/*使用指向结构体的指针*/
#include <stdio.h>
void main(){
  int n=0;
	struct data{
		int id;
		char name[20];
	}a[2]={{10,"wwz"},{20,"wj"}};
	struct data *p;
	p=a;
	for (n=0;n<=1;n++){
		printf("id:%d\n",p->id);
		printf("name:%s\n",p->name);
		printf("\n");
		p++;
	}
}
