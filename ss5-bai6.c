#include<stdio.h>

int main(){
	
	float  a , b ;
	int answer;
	
	do {
		printf("\n moi ban chon cac chuc nang sau :\n 1.sum\n 2.sub\n 3.mul\n 4.div\n 5.exit\n  ");
	    scanf("%d", &answer);
	    switch (answer) {
	    	case 1 :
	    		printf("moi ban nhap so thu nhat : ");
	    		scanf("%f", &a);
	    		printf("moi ban nhap so thu hai : ");
	    		scanf("%f", &b);
	    		printf("tong cua hai so la : %.2f", a+b);
	    		break ;
	    	case 2 :
	    		printf("moi ban nhap so thu nhat : ");
	    		scanf("%f", &a);
	    		printf("moi ban nhap so thu hai : ");
	    		scanf("%f", &b);
	    		printf("hieu cua hai so la : %.2f", a-b);
	    		break ;
			case 3 :
	    		printf("moi ban nhap so thu nhat : ");
	    		scanf("%f", &a);
	    		printf("moi ban nhap so thu hai : ");
	    		scanf("%f", &b);
	    		printf("tich cua hai so la : %.2f", a*b);
	    		break ;
			case 4 :
	    		printf("moi ban nhap so thu nhat : ");
	    		scanf("%f", &a);
	    		printf("moi ban nhap so thu hai : ");
	    		scanf("%f", &b);
	    		printf("thuong cua hai so la : %.2f", a/b);
	    		break ;
			case 5 :
	    		printf("chuong trinh ket thuc ");
	    	default :
			    printf("khong hop le");	
	    				
		}
		
	} while (answer!=5);
	
	
	
	return 0;
}
