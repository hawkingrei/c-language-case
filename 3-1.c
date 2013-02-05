/*要将“China”译成密码，密码规律是：原来的字母后面第4个字母代替原来的字母*/
#include <stdio.h>
void main(){
  char name[6]；
	name[0]='c';
	name[1]='h';
	name[2]='i';
	name[3]='n';
	name[4]='e';
	int n;
	for (n=0;n<=4;n++){
		name[n]=name[n]+4;
	}
	for (n=0;n<=4;n++){
		printf("%c\n",name[n]);
	}
	printf("\n");
}
