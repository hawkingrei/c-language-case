/*多维数组名当指针用(变化一)*/
#include <stdio.h>
void print(int (*a)[2]){
  int b,c;
	for (b=0;b<=1;b++){
		for (c=0;c<=1;c++){
			
			printf("%d\n",*(a[b]+c));
		}
		
	}
}
void main(){
	int d[2][2]={1,2,3,4};
	print(d);
	
}
