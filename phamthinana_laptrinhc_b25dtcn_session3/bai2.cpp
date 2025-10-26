#include <stdio.h>
int main(){
	float celsius;
	printf("Nhap nhiet do C : ",celsius);
	scanf("%f",&celsius);
	float fahrenheit = (celsius*9/5)+32;
	printf("Nhiet do F : %.2f",fahrenheit);
	return 0;
}
