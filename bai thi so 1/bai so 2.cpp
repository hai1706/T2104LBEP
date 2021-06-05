#include <stdio.h>
#include <string.h>

int main(){
	char s[100]="";
	printf("nhap s:");
	fgets(s, sizeof(s), stdin);
	
	printf("s= %s", s);
	strupr(s);
	printf("chuyen sang viet in hoa s=%s", s);
}
