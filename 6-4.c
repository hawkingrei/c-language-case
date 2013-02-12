/*#真题#代码结果猜测*/
#include <stdio.h>
void fun(int n,int *p){
  int f1,f2;
	if (n==1||n==2){
		*p=1;
	}else{
		fun(n-1,&f1);
		fun(n-2,&f2);
		*p=f1+f2;
	}
}
void main(){
	int s;
	fun(3,&s);
	printf("%d\n",s);
}
/*用指针实现函数返回数值*/
