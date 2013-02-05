/*输入8个英语字符串，按字符串的字典顺序输出*/
#include <stdio.h>
#include <string.h>
void main(){
  int n=0;
	int n1=0;
	int n2=0;
	char st[8][100];
	char exchange[100];
	
	for (n=0;n<=7;n++){
		scanf("%s",st[n]);
	}
	while (n1<=800){
		for (n=0;n<=6;n++){
			if (strcmp(st[n],st[n+1])<=0){}
			else{
				strcpy(exchange,st[n]);
				strcpy(st[n],st[n+1]);
				strcpy(st[n+1],exchange);
			}
		n1=n1+1;
		}
	}
	printf ("result:\n");
	for (n=0;n<=7;n++){
		printf("		%s\n",st[n]);
	}
}
