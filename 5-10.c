/*在函数中使用指向函数的指针*/
#include <stdio.h>
int doit(int (*m)(int,int),int a,int b){
  return(m(a,b));
}
int max(int a,int b){
	if (a>b){
		return a;
	}
	else {
		return b;
	}
}
void main(){
	printf("%d\n",doit(max,1,2));
}
