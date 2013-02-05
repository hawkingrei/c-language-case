/*从100到200，证明哥德巴赫猜想，即即任一大于2的偶数都可写成两个质数之和*/
#include "stdio.h"
void  main()
{
  long number=100;
	int first;
	int second;
	int i;
	for (number=2;number<=200;number=number+2){
		for (first=2;first<=number/2;first++){
			for (i=2;i<first;i++){
				if (first%i==0){
					break;
				}
			}
			if (i==first){
				second=number-first;
				for (i=2;i<second;i++){
					if (second%i==0){
						break;
					}
				}
				if (i==second){
					printf("%d=%d+%d\n",number,first,second);
					break;
				}
			}
		
	}
	}
}
