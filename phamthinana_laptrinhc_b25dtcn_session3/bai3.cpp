#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
int main(){
	float r;
	printf("Nhap ban kinh hinh tron :",r);
	scanf("%f",&r);
	
	float chu_vi = 2 * M_PI * r;
	float dien_tich = M_PI * r * r;
	
	printf("chu vi: %.2f\n", chu_vi);
	printf("dien tich: %.2f", dien_tich);
	return 0;
}

