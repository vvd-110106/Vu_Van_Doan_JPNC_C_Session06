#include<stdio.h>

int main(){
	int date=0, month, year;
	printf("Ban hay nhap vao mot thang bat ki tu 1-12:  ");
	scanf("%d", &month);
	printf("Ban hay nhap vao mot nam bat ki: ");
	scanf("%d", &year);
	if(month<1 || month>12){
		printf("Thang khong hop le ban hay thu lai. \n ");
		return 1;
	}
	switch(month) {
		case 1:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 3:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 5:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 7:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 8:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 10:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 12:
			date = 31;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 4:
			date = 30;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 6:
			date = 30;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 9:
			date = 30;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 11:
			date = 30;
			printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			break;
		case 2:
			if(year % 2 ==0){
				date =29;
				printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			}else{
				date =28;
			    printf("Thang %d nam %d co %d ngay. \n", month, year, date );
			}
	}
	return 0;
}
