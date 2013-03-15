/*数组a的*[a+数字]遍历数组*/
#include <stdio.h>
void main(){
  int a[5]={6,45,2,4,6},n;
	for (n=0;n<=4;n++){
		printf("%d\n",*(a+n));
	}
}
