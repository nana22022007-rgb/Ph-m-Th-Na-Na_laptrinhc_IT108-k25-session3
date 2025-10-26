#include<stdio.h>
int main(){
	float day, cao;
	printf("Nhap do dai day :");
	scanf("%f",&day);
	printf("Nhap chieu cao :");
	scanf("%f",&cao);
	float dien_tich = (day*cao)/2;
	printf("Dien tich hinh tam giac : %.2f",dien_tich);
	return 0;
}
