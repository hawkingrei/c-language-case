/*利用指针遍历数组a[3]*/
#include <stdio.h>
void main(){
  int a[3];
	int *p,i;
	for (i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for (p=a;p<(a+3);p++){
		printf("%d",*p);
		printf("\n");
	}
	
}
