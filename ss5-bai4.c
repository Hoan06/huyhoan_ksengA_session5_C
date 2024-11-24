#include<stdio.h>

int main(){
	int answer , i=1 , n;
	
	printf ("moi ban nhap 1 so nguyen duong tu 1 den 10 : ");
	scanf("%d", &answer);
	
	if (answer<1 || answer >10 ) {
		printf(" chi duoc nhap tu 1 den 10 thoi");
	} else {
		do {
			n = answer*i;
			printf("%d * %d = %d \n", answer , i , n);
			i++;
		} while (i<11);
	}
	
	return 0;
}
