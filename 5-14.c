/* *s+2和*(s+2)的区别 */
#include <stdio.h>
void main(){
  char s[]="resdf";
	printf("%c\n",*s+2);
	printf("%c\n",*(s+2));
}
