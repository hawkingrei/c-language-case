/*选择排序法*/
#include <stdio.h>
void main(){
  int n[10];
	int npoint=0,npoint2=0;
	int swap;
	for (npoint=0;npoint<=9;npoint++){
		printf("please input\n");
		scanf("%d",&n[npoint]);
		printf("\n");
	}
	for (npoint=0;npoint<=8;npoint++){
		for (npoint2=npoint;npoint2<=9;npoint2++){
			if (n[npoint2]>n[npoint]){
				swap=n[npoint];
				n[npoint]=n[npoint2];
				n[npoint2]=swap;
			}
		}
	}
	for (npoint=0;npoint<=9;npoint++){
		printf("%d\n",n[npoint]);
		
	}
}
