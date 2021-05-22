#include <stdio.h>
int main(){
	int n;
	int s= 0;
	
	do{
		printf("nhap n>0");
		scanf("%d", &n);
		if(n<=0){
			printf("nhap n>0");
		}
	}	while(n <= 0);
	printf(" cac uoc %d la:",n);
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%4d", i);
			s= s+i;
		}
	}
	printf("\n cac uoc cua %d la: %1d", n,s );
			
			
}
