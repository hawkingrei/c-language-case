/*证明取任意一个4位数（4个数字均为同一个数的除外），将该数的4个数字重新组合，
 *形成可能的最大数和可能的最小数，再将两者之间的差求出来；对此差值重复同样过
 *程，最后你总是至达卡普雷卡尔黑洞6174
*/
#include<stdio.h>
void insertSort(int r[],int len){
  int i,k,tmp;
	for(i=1;i<len;i++){
		k=i-1;
		tmp=r[i];
		while(k>=0&&r[k]>tmp){
			r[k+1]=r[k];
			k--;
		}
		r[k+1]=tmp;
	}
}
void main(){
	int N,count,end,s;
	int r[4];
	int max,min;
	printf("请输入一个任意的四位正整数（全相同的除外，如1111）：");
	scanf("%d",&N);
	count=0;
	end=0;
	s=N;
	while(end!=6174){
		r[0]=s%10;
		r[1]=s/10%10;
		r[2]=s/100%10;
		r[3]=s/1000;
		insertSort(r,4);
		max=1000*r[3]+100*r[2]+10*r[1]+r[0];
		min=1000*r[0]+100*r[1]+10*r[2]+r[3];
		end=max-min;
		count++;
		printf("第%d步：%d%d%d%d-%d%d%d%d=%d%d%d%d\n",count,r[3],r[2],r[1],r[0],r[0],r[1],r[2],r[3],end/1000,end/100%10,end/10%10,end%10);
		s=end;
	}
	printf("%d一共经过了%d步得到了6174\n",N,count);
}
