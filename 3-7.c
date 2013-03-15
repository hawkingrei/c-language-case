/*对字符变量赋值0，'\0'，'0'的区别*/
#include <stdio.h>
#include <string.h>
void main(){
  char x[]="STRING";
	x[0]=0;
	x[1]='\0';
	x[2]='0';
	printf("%d   %d\n",sizeof(x),strlen(x));
}
