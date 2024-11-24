#include<stdio.h>

int main(){
	
	int  i=1 , n , a;
	
	for (a=1 ; a<=9 ; a++){
		printf("bang cuu chuong %d : \n", a);
		for (i=1 ; i<=10 ; i++){
			n=a*i;
			printf("%d * %d = %d \n", a , i , n);
		}
	}
			
	return 0;
}
