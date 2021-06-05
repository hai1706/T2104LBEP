#include<stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("Nhap canh a:");
	scanf("%f", &a);
	printf("nhap canh b:");
	scanf("%f", &b);
	printf("nhap canh c:");
	scanf("%f", &c);
	if(a+b>c && a+c>b && c+b>a){
		printf(" a, b, c la ba canh cua tam giac", a,b,c);
	}
	float p, s;

	p=(a+b+c)/2;
	s= sqrt(p*(p-a)*p*(p-b)*p*(p-c));
	printf("\ndien tich tam giac la: %.2f", s);
}
