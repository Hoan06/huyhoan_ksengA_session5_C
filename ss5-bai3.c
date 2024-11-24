#include<stdio.h>

int main(){
	
	int i;
	int answer ,total = 0;
	printf("moi ban nhap 1 so nguyen duong ");
	scanf("%d", &answer);
	if (answer<=0){
		printf("day khong phai so duong");
	} else {
		for ( i=1 ; i<=answer ; i++) {
			total+=i;
		}
		printf("tong cac so tu 1 den %d la : %d", answer , total);
	}
	
	return 0;
}
