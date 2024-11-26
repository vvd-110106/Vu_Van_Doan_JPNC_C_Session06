#include<stdio.h>

int main(){
	int num, soluongsochan=0, soluongsole=0;
	printf("Ban hay nhap vao 5 so nguyen \n");
	for(int i=0; i<5; i++) {
		printf("Ban hay nhap vao so thu %d: ", i+1);
		scanf("%d", &num);
		if(num %2 ==0) {
			soluongsochan++;
		}else{
			soluongsole++;
		}
	}
	printf("So luong so chan la: %d \n", soluongsochan);
	printf("So luong so le la: %d \n", soluongsole);
	return 0;
}
