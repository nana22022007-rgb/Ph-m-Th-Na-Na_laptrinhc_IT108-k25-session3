#include<stdio.h>
#include<math.h>
int main(){
	float toan;
	float van;
	float anh;
	printf("Nhap so diem toan :");
	scanf("%f",&toan);
	printf("Nhap so diem van :");
	scanf("%f",&van);
	printf("Nhap so diem anh :");
	scanf("%f",&anh);
	float sum = anh + van + toan;
	float average = (anh + van + toan)/3;
	printf("Tong diem : %.2f\n",sum);
	printf("Diem trung binh : %.2f", average);
	return 0;
}
