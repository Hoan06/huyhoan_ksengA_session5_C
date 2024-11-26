#include<stdio.h>

int main(){
	
	float  a , b , c , ketqua ;
	int answer;
	
	printf("moi ban nhap so thu nhat : ");
	scanf("%f", &a);
	printf("moi ban nhap so thu hai : ");
	scanf("%f", &b);
	
	do {
		printf("\n moi ban chon cac chuc nang sau :\n 1.nhapbaso\n 2.tong3so\n 3.tbc3so\n 4.snn\n 5.sln\n 6.thoat\n  ");
	    scanf("%d", &answer);
	    switch (answer) {
	    	case 1 :
	    		printf("moi ban nhap so thu nhat : ");
	    		scanf("%f", &a);
	    		printf("moi ban nhap so thu hai : ");
	    		scanf("%f", &b);
	    		printf("moi ban nhap so thu ba : ");
	            scanf("%f", &c);
	    		break ;
	    	case 2 :
	    		ketqua = a+b+c;
	    		printf ("tong 3 so la %.2f", ketqua );
	    		break ;
			case 3 :
	    		ketqua = (a+b+c)/3;
	    		printf("tbc 3 so la %.2f", ketqua);
	    		break ;
			case 4 :
				if(a<b && a<c){
					printf ("snn la %.2f", a);
				} else if (b<a && b<c){
					printf ("snn la %.2f", b);
				} else if (c<a && c<b){
					printf ("snn la %.2f", c);
				}
	    		break ;
			case 5 :
	    		if(a>b && a>c){
					printf ("sln la %.2f", a);
				} else if (b>a && b>c){
					printf ("sln la %.2f", b);
				} else if (c>a && c>b){
					printf ("sln la %.2f", c);
				}
	    		break ;
	    	case 6 :
	    		printf ("chuong trinh ket thuc ");
	    		break ;
	    	default :
			    printf("byeeeeeeeeeee");	
	    				
		}
		
	} while (answer!=6);
	
	
	
	return 0;
}
