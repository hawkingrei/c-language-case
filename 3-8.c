/* 条件操作符的短路现象 */
#include <stdio.h>
void main(){
  int n=2,k=0;
	while(k++&&n++>2);
	printf("%d %d\n",k,n);
}
