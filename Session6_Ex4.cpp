#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, delta, x, x1;
	printf("Ban hay nhap gia tri cho gia tri cua x^2: ");
	scanf("%f", &a);
	printf("Ban hay nhap gia tri cho gia tri cua x: ");
	scanf("%f", &b);
	printf("Ban hay nhap gia tri cho gia tri cua so tu do: ");
	scanf("%f", &c);
	if(a <= 0){
		printf("Phuong trinh bac 2 khong hop le");
		return 1;
	}
	delta = b*b - 4*a*c;
	if(delta > 0) {
		printf("Phuong trinh co hai nghiem phan biet la: \n ");
		x = (-b + sqrt(delta)) / 2*a;
		x1 = (-b - sqrt(delta))/ 2*a;
		printf("Nghiem x1 cua phuong trinh la: %f \n ", x);
		printf("Nghiem x2 cua phuong trinh la: %f \n ", x1);
	}else if(delta ==0) {
		printf("Phuong trinh co hai nghiem kep: \n");
		x = -b / 2*a;
		printf("Nghiem kep cua phuong trinh la: %f \n", x);
	}else{
		printf("Phuong trinh vo nghiem.");
	}
	return 0;
}
