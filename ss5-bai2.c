#include<stdio.h>

int main(){
	
	int i = 5;
	int answer;
	
	do {
		printf("moi ban nhap 1 so bat ky ");
		scanf("%d", &answer);
	} while (answer != i);
	printf("chinh xac");
	 
	return 0;
}
