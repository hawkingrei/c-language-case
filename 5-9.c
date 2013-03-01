/*指向函数的指针的实现*/
#include <stdio.h>
int max(int a,int b){
  if (a>b){
		return a;
	}
	else {
		return b;
	}
}
void main(){
	int (*m)(int,int);
	m=max;
	printf("%d\n",m(1,2));
}
