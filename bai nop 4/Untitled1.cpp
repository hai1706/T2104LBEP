#include <stdio.h>
int main(){
	int a, b, bcnn;
	printf("nhap a ,b");
	scanf("%d%d", &a, &b);
	
	if(a==0 || b==0){
		bcnn= (a*b);
	} else{
		while(a!=b){
			if(a>b){
				a=a*b;
			}else{
				b=b*a;
			}
		}
		bcnn=a*b;
	}
	printf("boi chung nho nhat:%d", bcnn);
	
	return 0;
}
