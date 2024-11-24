#include<stdio.h>

int main(){
	int a , b ,temp , a1 , b1 , ucln , bcnn;
	printf("moi ban nhap so thu nhat ");
	scanf("%d", &a);
	printf("moi ban nhap so thu hai ");
	scanf("%d", &b);
	a1=a;
	b1=b;
	while (b!=0){
		temp = a% b;
		a=b;
		b=temp;
	}
	ucln=a;
	bcnn= (a*b)/ucln;
	printf ("bcnn la %d", bcnn);
	
	return 0;
}
