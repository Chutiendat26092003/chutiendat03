#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan;
	float van;
	float anh;
	
	printf("NHap diem mon toan :\n");
	scanf("%f", &toan);
	
	printf("Nhap diem mon van :\n");
	scanf("%f", &van);
	
	printf("Nhap diem mon anh :\n");
	scanf("%f", &anh);
	
	printf("Tong 3 mon %f", toan + van + anh);
	
	return 0;
}
