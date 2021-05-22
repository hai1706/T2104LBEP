#include <stdio.h>
int main(){
	int a, b, bcnn;
	printf("nhap gia tri a, b");
	scanf("%d%d", &a, &b);
	if(a==0 && b==0){
		printf(" khong ton tai bcnn");
	}else if(a==0|| b==0){
		printf("khong co bcnn");
	}
		else if(a>0||b>0){
			int bcnn=a*b;
			printf("bncc=%d", bcnn);
		}
		return 0;
}
