/*100到200之间素数之和*/
#include <stdio.h>
void main(){
  int f=0;
	int i=0;
	int sum=0;
	for (f=100;f<=200;f++){
		for (i=2;i<f;i++){
			if (f%i==0) 
			{
				break;
			}
		
		}
		if (i==f) 
		{
			sum=sum+f;
		}
	}
	printf("%d\n",sum);
}
