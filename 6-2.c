/*素数问题*/
#include <stdio.h>
void main(){
  int n;
	int c;
	printf("please input:");
	scanf("%d",&n);
	for (c=2;c<n;c++){
		if (n%c==0){
			break;	
		}
	}

	if (c==n){
		printf("素数\n");
	}else{
		printf("不是素数\n");
	}
}
