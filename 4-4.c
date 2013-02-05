/*输出有30项的斐波那契数列*/
#include <stdio.h>
void main(){
  int x0;
	int x1;
	int x2;
	int n;
	x0=1;
	x1=1;
	printf("%d\n%d\n",x0,x1);
	for (n=0;n<=27;n++){
		x2=x0+x1;
		printf("%d\n",x2);
		x0=x1;
		x1=x2;	
	}
}
