/*#技能#用sizeof确定数组元素个数*/
#include <stdio.h>
void main(){
  int a[4];
	printf("这个数组有%d",sizeof(a)/sizeof(a[0]));
	printf("个");
}
