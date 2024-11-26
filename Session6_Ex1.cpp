#include<stdio.h>

int main(){
	int number, sum=0;
	printf("Ban hay nhap vao 5 so nguyen: \n");
	
	for(int i=0; i < 5; i++) {
		printf("So ban nhap lan thu %d la: ", i+1 );
		scanf("%d", &number);
		if(number % 2 !=0) {
			sum+=number;
		}
	}
	printf("Tong cac so le ban vua nhap la: %d", sum);
	return 0;
}
