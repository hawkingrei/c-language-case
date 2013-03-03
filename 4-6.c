//快速排序法
#include <stdio.h>
int partitions(int a[],int low,int high){
  int pivotkey=a[low];
	while(low<high){
		while(low<high && a[high]>=pivotkey){
			--high;
		}		
		a[low]=a[high];
		while(low<high && a[low]<=pivotkey){
			++low;
		}
		a[high]=a[low];
	}
	a[low]=pivotkey;
	return low;
}
void qsort(int a[],int low,int high){
	int pivottag;
	if(low<high){ //递归调用
		pivottag=partitions(a,low,high);
		qsort(a,low,pivottag-1);
		qsort(a,pivottag+1,high);
	}
}
void quicksort(int a[],int n){
	qsort(a,0,n);
}
void main()
{
	int i,a[11]={0,11,12,5,6,13,8,9,14,7,10};
	for(i=0;i<11;printf("%3d",a[i]),++i);
		printf("\n");
	quicksort(a,10);
	for(i=0;i<11;printf("%3d",a[i]),++i);
		printf("\n");
}
