/*while (p--)的问题*/
#include <stdio.h>
void main(){
  int p=10;
	while (p--){   /*先验证p是非真，再减1，后按照是非，跳转*/
		printf("%d\n",p);
	}
	printf("%d\n",p);
}
