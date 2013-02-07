/*利用返回指针值的函数找出数组的最大值*/
#include <stdio.h>
int *max(int a[],int n){
  int *max;
	int maxa;
	n=n-1;
	maxa=a[0];
	for (;n>=0;n--){
		if (maxa<=a[n]){
			max=&a[n];
			maxa=a[n];
		}
	}
	return(max);
}
void main(){
	int number[7]={100000,1,3,42,324,553,234};
	int *address;
	address=max(number,7);
	printf("max:%d\n",*address);
}
