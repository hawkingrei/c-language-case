/* 函数指针int (*p)(int,int)演示*/
#include <stdio.h>
int add(int a,int b){
  return (a*b);
}
void main(){
	int (*p)(int,int);
	p=add;
	printf("%d\n",p(6,7));
}
