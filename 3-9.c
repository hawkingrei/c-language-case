/* 数组名当指针用*/
#include <stdio.h>
void add(int a[]){
  int b;
	for (b=0;b<=5;a++,b++){
		*a+=1;
	}
}
void main(){
	int c[5]={1,2,3,4,5},n;
	add(c);
	for (n=0;n<=4;n++){
		printf("%d\n",c[n]);
	}
}
