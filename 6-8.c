/*转义字符\0的问题*/
#include <stdio.h>
void main(){
  char s[]="012xy\08s34f4w2";
	int i,n=0;
	printf ("%s",s);
	for (i=0;s[i]!=0;i++){
		printf("%c\n",s[i]);
		if(s[i]>='0'&&s[i]<='9')n++;
	printf("==========%d==========\n",n);
	}
	printf("%d\n",n);
}
