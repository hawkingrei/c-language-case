/* *m[4]和(*n)[4],*(o[4])的区别 */
#include <stdio.h>
void main(){
	int *m[4];
	int (*n)[4];
	int *(o[4]);
	int e[4]={4,5,6,7};
	int a=0,b=1,c=2,d=3,y;
	m[0]=o[0]=&a;
	m[1]=o[1]=&b;
	m[2]=o[2]=&c;
	m[3]=o[3]=&d;
	for (y=0;y<=3;y++){
		printf("%d\n",*m[y]);
	}
	n=e;
	printf("=========================================\n");
	for (y=0;y<=3;y++){
		printf("%d		%d\n",**n,*(o[y]));
		n=(*n)+1;

	}
}
