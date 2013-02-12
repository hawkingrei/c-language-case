/*#真题#代码结果猜测*/
#include <stdio.h>
void swap(int *a,int *b){
  int *t;
	t=a;
	a=b;
	b=t;
	printf("%d %d\n",*a,*b);
}
void main(){
	int i=3,j=5,*p=&i,*q=&j;
	swap(p,q);
	printf("%d %d\n",*p,*q);
}
/*指针指向*/
