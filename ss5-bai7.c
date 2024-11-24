#include<stdio.h>

int main(){
	int a , b ,temp;
	printf("moi ban nhap so thu nhat ");
	scanf("%d", &a);
	printf("moi ban nhap so thu hai ");
	scanf("%d", &b);
	
	while (b!=0){
		temp = a% b;
		a=b;
		b=temp;
	}
	printf ("UCLN la %d", a);
	
	return 0;
}
