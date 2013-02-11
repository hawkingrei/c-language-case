/*5-8.c 有10个颜色的球，颜色分别是white,black,blue,pink,yellow,green,orange,red，从中拿出三个球，把所有拿法打印出来*/
#include <stdio.h>
void main(){
  enum colour{white,black,blue,pink,yellow,green,orange,red};
	enum colour first,second,third,print;
	int n;
	int total=1;
	for (first=0;first<=red;first++){
		for (second=0;second<=red;second++){
			if (first!=second){
				for (third=0;third<=red;third++){
					if (third!=first&&third!=second){
						printf("%-4d:",total);
						for (n=0;n<3;n++){
							switch (n){
								case 0:print=first;break;
								case 1:print=second;break;
								case 2:print=third;break;
							}
							switch (print){
								case 0:printf("%-10s","white");break;
								case 1:printf("%-10s","black");break;
								case 2:printf("%-10s","blue");break;
								case 3:printf("%-10s","pink");break;
								case 4:printf("%-10s","yellow");break;
								case 5:printf("%-10s","green");break;
								case 6:printf("%-10s","orange");break;
								case 7:printf("%-10s","red");break;	
							}
						}
						total=total+1;
						printf("\n");
					}
				}

			}
		}
	}
}
