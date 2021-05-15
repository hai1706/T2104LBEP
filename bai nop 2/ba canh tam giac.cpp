#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("nhap a:");
	scanf("%f", &a);
	printf("nhap b:");
	scanf("%f", &b);
	printf("nhap c:");
	scanf("%f", &c);
	if(a+b>c||a+c>b||b+c>a){
		float p,s,n;
		p= a+b+c;
		n=p/2;
		s=sqrt(n*(n-a)*(n-b)*(n-c));
		printf("a,b,c la 3 canh cua 1 tam giac\n");
		printf("chu vi tam giac la: %f\n",p);
		printf("dien tich tam giac la: %f",s);
		
	}
	else{
		printf("a,b,c khong phai la canh cua tam giac");
	}
	
}
