#include<stdio.h>

int main(){
	int matkhau=123456, dapan;
	printf("Ban hay nhap mat khau nhe: \n");
	do{
		printf("Ban hay nhap mat khau:");
		scanf("%d", &dapan);
	}while(matkhau != dapan);
	printf("Dung roi");
	return 0;
}
