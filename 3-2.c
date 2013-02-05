/*输入9位同学的成绩，输出平均数，通过率（大于等于60），最高分，最低分*/
#include <stdio.h>
void main(){
  int n;
	int sum=0;
	int pass=0;
	int score[10];
	int max=0;
	int min=0;
	double average=0;
	for (n=0;n<=9;n=n+1) {
		scanf("%d",&score[n]);
	}
	n=0;
	min=score[0];
	max=score[0];
	while (n<=9){
		sum=sum+score[n];
		if (score[n]>=60)
		{
			pass=pass+1;
		}	
		if (score[n]<min)
		{		
			min=score[n];
		}
		if (score[n]>max)
		{
			max=score[n];
		}
		n=n+1;
	}
	average=sum/10;
	printf("average:%f\npass rate:%d\n",average,pass*10);
	printf("max:%d\nmin:%d\n",max,min);

}
