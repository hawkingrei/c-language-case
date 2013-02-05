/*
小猴吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半多了一个，第二天吃了剩下的一半多了一个，之后每天
吃了剩下的一半多了一个，到了第十天只剩下一个。第一天共栽多少个桃子？
*/
#include <stdio.h>
void main (){
  int apple=1;
	int n=1;
	do {
	apple=(apple+1)*2;
	n=n+1;
	}while(n<10);
	printf("apple:%d",apple);
}
