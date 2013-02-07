/*利用指针在函数内改变主函数变量值*/
#include <stdio.h>
void change(int *a){
  *a=0;
}
void main(){
	int *b;
	int a;
	a=100;
	b=&a;
	change(b);
	printf ("%d",*b);
}
