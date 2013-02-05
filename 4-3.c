/*输出小于10000的最大质数*/
#include <stdio.h>
void main(){
  int n=10000;
	int i=2;
	int error=0;
	for (;;n--)
	{
		for (i=2;i<n;i++)
		{
			if (n%i==0){
				break;
			}
		}
		if (i<n)
		{	
		continue;
		}
		else 
		{
		printf ("%d",n);
		break;
		}
	}
}
